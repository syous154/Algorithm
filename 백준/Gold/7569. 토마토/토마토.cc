#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
class xyz {
public:
	int x;
	int y;
	int z;
};

int box[101][101][101];
bool visited[1001] = { false, };
queue<xyz> q;
int m, n, h;

int dx[6] = { 1,0,-1,0,0,0 };
int dy[6] = { 0,1,0,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

void bfs() {
	while (!q.empty()) {
		int y = q.front().y;
		int x = q.front().x;
		int z = q.front().z;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];

			//nx,ny가 box 범위내에 있고 box[nx][ny]가 익지 않은 토마토라면
			if (nx >= 0 && nx < m && ny >= 0 && ny < n && nz >= 0 && nz < h && box[nz][ny][nx] == 0) {
				box[nz][ny][nx] = box[z][y][x] + 1;
				xyz tom;
				tom.x = nx;
				tom.y = ny;
				tom.z = nz;

				q.push(tom);
			}
		}
	}

}

int main() {

	cin >> m >> n >> h;
	for (int z = 0; z < h; z++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> box[z][i][j];
				if (box[z][i][j] == 1) {
					xyz tom;
					tom.x = j;
					tom.y = i;
					tom.z = z;

					q.push(tom);		// 익은 토마토가 여러개여도 모두 q에 넣기 때문에 동시에 bfs 진행이 가능하다.	(y,x) 식으로 q에 들어가게 됨
				}
			}
		}
	}

	bfs();

	int answer = 0;
	for (int z = 0; z < h; z++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (box[z][i][j] == 0) {
					cout << "-1" << '\n';
					return 0;
				}

				if (answer < box[z][i][j]) {
					answer = box[z][i][j];
				}
			}
		}
	}
	cout << answer - 1 << '\n';
	return 0;

}

