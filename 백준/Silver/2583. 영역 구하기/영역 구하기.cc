#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int m, n, k;
bool arr[101][101] = { false, };
bool visited[101][101]{ false, };

int dx[4] = {-1, 1, 0, 0};
int dy[4] = { 0,0,1,-1 };
vector<int> area;

int bfs(int i, int j) {
	int count = 0;
	visited[i][j] = true;
	queue<pair<int, int>> q;
	q.push({ i,j });
	
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int idx = 0; idx < 4; idx++) {
			int ny = y + dy[idx];
			int nx = x + dx[idx];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m && visited[ny][nx] == false) {
				q.push({ ny,nx });
				visited[ny][nx] = true;
			}
		}
		count++;
	}

	return count;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = false;
			visited[i][j] = false;
		}
	}
	cin >> m >> n >> k;
	int x1, x2, y1, y2;
	while (k--) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				arr[i][j] = true;
				visited[i][j] = true;
			}
		}	
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == false) {
				area.push_back(bfs(i, j));
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	sort(area.begin(), area.end());
	for(int i = 0 ; i < area.size(); i++){
		cout << area[i] << ' ';
	}
	return 0;
}
