#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int box[1001][1001];
bool visited[1001] = { false, };
queue<pair<int,int>> q;
int m, n;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i]; 

			//nx,ny가 box 범위내에 있고 box[nx][ny]가 익지 않은 토마토라면
			if (nx >= 0 && nx < m && ny >= 0 && ny < n && box[ny][nx] == 0) {
				box[ny][nx] = box[y][x] + 1;	
				q.push({ ny,nx });
			}
		}
	}

}

int main() {
	
	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1) {
				q.push({ i,j });		// 익은 토마토가 여러개여도 모두 q에 넣기 때문에 동시에 bfs 진행이 가능하다.	(y,x) 식으로 q에 들어가게 됨
			}
		}
	}

	bfs();

	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (box[i][j] == 0) {
				cout << "-1" << '\n';
				return 0;
			}

			if (answer < box[i][j]) {
				answer = box[i][j];
			}
		}
	}
	cout << answer-1<< '\n';
	return 0;
	
}

