#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

#define endl '\n'
#define int int64_t
#define pii pair<int, int>
#define fastio cin.tie(NULL) -> ios_base::sync_with_stdio(false)

using namespace std;

const int MAX = 100 + 1;

int N, M;
bool grid[MAX][MAX];
bool temp_grid[MAX][MAX];
int dr[4] = { 1, 0, -1, 0 };
int dc[4] = { 0, 1, 0, -1 };

vector<pair<pii, int>> answer;

inline void inputInstance()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		// 데이터를 효율적으로 관리하기 위해 부울형으로 변환환
		for (int j = 0; j < M; j++)
		{
			if (input[j] == '.') grid[i][j] = 0; // '.'은 false로
			else grid[i][j] = 1;            // '*'는 true로 저장장
		}
	}
}
bool is_in_range(int r, int c)
{
	return (r >= 0 && r < N && c >= 0 && c < M);
}
bool is_cross(int r, int c, int cross_size)
{
	for (int di = 0; di < 4; di++)
	{
		int cnt = 0;
		int next_r = r + dr[di];
		int next_c = c + dc[di];
		for (int i = 0; i < cross_size; i++)
		{
			// next_r, next_c가 배열의 범위 내에 존재하면서 해당 좌표가 '*'라면
			if (is_in_range(next_r, next_c) && grid[next_r][next_c])
			{
				cnt++;
			}
			next_r += dr[di];
			next_c += dc[di];
		}
		if (cnt != cross_size) return false;
	}
	return true;
}

// answer 배열에 들어있는 십자가의 정보를 토대로 temp_grid를 그림림
void draw_grid()
{
	for (int i = 0; i < answer.size(); i++)
	{
		int r = answer[i].first.first;
		int c = answer[i].first.second;
		temp_grid[r][c] = 1;
		for (int di = 0; di < 4; di++)
		{
			int next_r = r + dr[di];
			int next_c = c + dc[di];
			for (int s = 0; s < answer[i].second; s++)
			{
				temp_grid[next_r][next_c] = 1;
				next_r += dr[di];
				next_c += dc[di];
			}
		}
	}
}
bool is_equal()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (grid[i][j] != temp_grid[i][j]) return false;
		}
	}
	return true;
}
inline void solve()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			// grid[i][j] 가 '*'라면 해당 좌표에 십자가가 있는지 확인
			if (grid[i][j])
			{
				int cross_size = 1;
				// 크기가 1, 2 ... 인 십자가를 차례로 확인.
				while (is_cross(i, j, cross_size))
				{
					answer.push_back({ {i, j}, cross_size });
					cross_size++;
				}

			}
		}
	}
	// temp_grid 생성. 
	draw_grid();
	// 입력받은 grid와 십자가만을 이용하여 만들어진 temp_grid를 비교.
	if (is_equal())
	{
		cout << answer.size() << endl;
		for (int i = 0; i < answer.size(); i++)
		{
			cout << answer[i].first.first + 1 << " "
				<< answer[i].first.second + 1 << " "
				<< answer[i].second << endl;
		}
	}
	else
		cout << -1 << endl;
}
int32_t main()
{
	fastio;

	inputInstance();
	solve();

	return 0;
}