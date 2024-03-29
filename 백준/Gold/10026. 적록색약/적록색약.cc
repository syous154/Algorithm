#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

char grid[101][101];		//정상 grid
char grid2[101][101];		//적록색약 grid

int n;
bool  visited[101][101] = {false,};
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y) {		//정상 grid의 dfs
	if (visited[x][y] == true) {	//이미 방문했다면 return;
		return;
	}
	else {							//이미 방문하지 않았다면
		visited[x][y] = true;		//이제 방문했으니 방문했다고 체크
		
		for (int i = 0; i < 4; i++) {	//nx,ny에 현재 위치의 4방향의 값을 넣음
			int nx = x + dx[i];		
			int ny = y + dy[i];
			
			//nx,ny가 n범위 내에 있고 현재 위치와 인접한 위치의 색깔값이 같다면?
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[x][y] == grid[nx][ny]) {
				dfs(nx, ny);	// 새로운(인접한) 위치의 값을 dfs로 넣어준다
			}
		}
	}
}
void dfs2(int x, int y) {		//적록색약 grid의 dfs
	if (visited[x][y] == true) {
		return;
	}
	else {
		visited[x][y] = true;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			//dfs1과 다른 점은 grid의 변수명만 다름 grid -> grid2
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid2[x][y] == grid2[nx][ny]) {

				dfs2(nx, ny);
			}
		}
		return;
	}
}
int main() {
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 'G') {		//입력이 G가 들어오면
				grid2[i][j] = 'R';			//적록색약 grid에 R을 집어넣음
			}
			else {
				grid2[i][j] = grid[i][j];	//입력이 G가 아니면 그냥 똑같이 집어넣음
			}
		}
	}
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == false) {
				dfs(i,j);
				cnt1++;
			}
		}
	}
	

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			visited[i][j] = false;		//visited 배열초기화
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == false) {
				dfs2(i, j);
				cnt2++;
			}
		}
	}
	cout << cnt1<<' '<< cnt2 << '\n';
	return 0;
	
}

