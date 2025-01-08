#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int map[51][51];
bool visited[51][51];
int w, h;
int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
void bfs(int start_x, int start_y) {


	visited[start_x][start_y] = true;
	queue < pair < int, int>> q;

	q.push({ start_x, start_y });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x >= 0 && new_x < h && new_y >= 0 && new_y < w && !visited[new_x][new_y] && map[new_x][new_y] == 1) {
				visited[new_x][new_y] = true;
				q.push({ new_x , new_y });
			}
		}
	}

}

void initialize() {
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			map[i][j] = 0;
			visited[i][j] = false;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	while (1) {
		cin >> w >> h;

		if (w == 0 && h == 0) {
			break;
		}

		initialize();

		int result = 0;
		

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && !visited[i][j]) {
					bfs(i,j);
					result++;
				}
			}
		}
		cout << result << '\n';
	}

	return 0;

}