#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <tuple>
using namespace std;

int mp[1001][1001];
bool visited[2][1001][1001];   // [broken][x][y]
int distv[2][1001][1001];      // [broken][x][y]
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int n, m;

void bfs() {
    queue<tuple<int,int,int>> q; // x, y, broken(0/1)
    q.emplace(0, 0, 0);
    visited[0][0][0] = true;
    distv[0][0][0] = 1;

    while (!q.empty()) {
        auto [x, y, broken] = q.front(); q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            // 빈 칸으로 이동
            if (mp[nx][ny] == 0 && !visited[broken][nx][ny]) {
                visited[broken][nx][ny] = true;
                distv[broken][nx][ny] = distv[broken][x][y] + 1;
                q.emplace(nx, ny, broken);
            }
            // 벽이면, 아직 안 부쉈을 때만 부수고 이동
            else if (mp[nx][ny] == 1 && broken == 0 && !visited[1][nx][ny]) {
                visited[1][nx][ny] = true;
                distv[1][nx][ny] = distv[broken][x][y] + 1;
                q.emplace(nx, ny, 1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    
    
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < m; j++) mp[i][j] = s[j] - '0';
    }

    bfs();

    int a = distv[0][n-1][m-1];
    int b = distv[1][n-1][m-1];

    int ans = 0;
    if (a == 0 && b == 0) ans = -1;
    else if (a == 0) ans = b;
    else if (b == 0) ans = a;
    else ans = min(a, b);

    cout << ans << "\n";
    return 0;
}
