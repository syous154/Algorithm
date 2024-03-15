#include <iostream>
#include <queue>

using namespace std;
int board[101][101] = { 0, };
int dist[101][101] = { 0, };

bool visited[101][101] = { false, };
int n, m;
queue < pair < int, int>> q;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int cnt = 1;
void bfs(int start_x, int start_y) {
	visited[start_x][start_y] = true;
	q.push({ start_x, start_y });
	dist[start_x][start_y] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx <= n - 1 && ny >= 0 && ny <= m - 1 && visited[nx][ny] != true && board[nx][ny] != 0) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
				dist[nx][ny] = dist[x][y] + 1;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			board[i][j] = s[j] - '0';
		}
	}
	bfs(0, 0);

	
	cout << dist[n - 1][m - 1] << '\n';

}