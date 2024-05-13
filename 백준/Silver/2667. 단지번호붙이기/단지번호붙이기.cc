#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

string map[26];
bool visited[26][26] = { false, };
int n;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(int i, int j) {
	int cnt = 0;
	pair<int, int> p;
	p.first = i;
	p.second = j;
	visited[i][j] = true;

	queue<pair<int, int>> q;
	q.push(p);

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n && visited[ny][nx] == false && map[ny][nx] == '1') {
				visited[ny][nx] = true;
				q.push({ ny, nx });
			}
		}
		cnt++;
	}
	return cnt;
}

int main() {
	cin >> n;
	int danji = 0;
	vector<int> d_cnt;

	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1' && visited[i][j] == false) {
				danji++;
				int val = bfs(i, j);

				d_cnt.push_back(val);

			}
		}
	}
	sort(d_cnt.begin(), d_cnt.end());

	cout << danji << '\n';
	for (int i = 0; i < danji; i++) {
		cout << d_cnt[i] << '\n';
	}

	return 0;
}