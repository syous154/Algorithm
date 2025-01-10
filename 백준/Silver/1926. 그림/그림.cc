#include <iostream>
#include <queue>

using namespace std;
int board[501][501] = { 0, };

bool visited[501][501] = { false, };
int n, m;
queue < pair < int, int>> q;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int cnt = 0;
int max_val = 0;

int bfs(int start_x, int start_y) {
	visited[start_x][start_y] = true;
	q.push({ start_x, start_y });
	int cnt2 = 0;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		cnt2++;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx <= n - 1 && ny >= 0 && ny <= m - 1 && visited[nx][ny] != true && board[nx][ny] != 0) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
	return cnt2;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] != true && board[i][j] == 1) {
				int val = bfs(i, j);
				if (max_val < val) {
					max_val = val;
				}
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	cout << max_val << '\n';

}