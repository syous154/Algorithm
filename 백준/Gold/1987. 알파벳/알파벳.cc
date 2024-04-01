#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

char grid[21][21];

bool  visited[26] = {false,};		//알파벳 갯수만큼의 visited 배열 생성
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
vector<char> v;
int answer = 0;
int r, c;

void dfs(int x, int y,int cnt) {		
							
	answer = max(cnt, answer);

	for (int i = 0; i < 4; i++) {	
		int nx = x + dx[i];		
		int ny = y + dy[i];
		
		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
			if (visited[grid[nx][ny] - 'A'] == false) {	// 방문하지 않았던 알파벳이면
				visited[grid[nx][ny] - 'A'] = true;		// 방문 처리 후
				dfs(nx, ny, cnt + 1);					// 다음 dfs로 진행
				visited[grid[nx][ny] - 'A'] = false;	// 다른 방법으로 진행이 가능하기 때문에 다시 비방문 처리
			}
		}
	}
}

int main() {
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> grid[i][j];
		}
	}
	visited[grid[0][0] - 'A'] = true;					// 가장 처음칸은 항상 방문되어있음
	dfs(0, 0, 1);										// 처음 칸도 횟수에 포함되기 때문에 cnt=1로 시작


	cout << answer << '\n';
	return 0;
	
}

