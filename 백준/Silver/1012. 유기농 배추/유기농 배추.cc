#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int bat[51][51];
bool visited[51][51];
int n, m, k;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int cnt = 0;

void bfs(int i, int j) {
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

			if (nx >= 0 && nx < m && ny >= 0 && ny < n && visited[ny][nx] == false && bat[ny][nx] == 1) {
				visited[ny][nx] = true;
				q.push({ ny, nx });
			}
		}
	}
	return;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				bat[i][j] = 0;
				visited[i][j] = false;
			}
		}
		
		cin >> m >> n >> k;	// 가로길이 M(1 ≤ M ≤ 50)과 세로길이 N(1 ≤ N ≤ 50)
		
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			bat[y][x] = 1;
		}
		/*for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << bat[i][j] << ' ';
			}
			cout << '\n';
		}*/

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (bat[i][j] == 1 && visited[i][j] == false) {
					cnt++;
					bfs(i, j);
				}
			}
		}

		
		cout << cnt << '\n';
	}

	return 0;
}