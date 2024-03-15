#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#define MAX 501
using namespace std;

bool visited[MAX] = { false, };
vector<int> v[MAX];
int answer = 0;

bool dfs(int start, int before) {
    visited[start] = true;
    for (int i = 0; i < v[start].size(); i++) {
        int next = v[start][i];     //start가 next의 부모이다.
        if (next == before) {
            continue;
        }
        if (visited[next] == true) {
            return false;
        }
        if (!dfs(next, start)) {
            return false;
        }
    }
    return true;
}
int main()
{
    int count = 1;

    while (1) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        else {
            answer = 0;
            for (int i = 1; i <= 500; i++)
            {
                v[i].clear();
                visited[i] = false;
            }

            int a, b;
            for (int i = 0; i < m; i++) {
                cin >> a >> b;
                v[a].push_back(b);
                v[b].push_back(a);
            }
            for (int i = 1; i <= n; i++) {
                if (!visited[i]) {
                    if (dfs(i, 0))
                        answer++;
                }
            }
            
        }
        if (answer == 0)   cout << "Case " << count << ": No trees.\n";
        else if (answer == 1)  cout << "Case " << count << ": There is one tree.\n";
        else    cout << "Case " << count << ": A forest of " << answer << " trees.\n";
        count++;
    }
    return 0;
}