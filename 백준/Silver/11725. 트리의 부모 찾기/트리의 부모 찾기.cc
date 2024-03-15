#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#define MAX 100001
using namespace std;

bool visited[MAX] = { false, };
vector<int> v[MAX];
int answer[MAX];
void dfs(int start) {
    visited[start] = true;
    for (int i = 0; i < v[start].size(); i++) {
        int next = v[start][i];     //start가 next의 부모이다.
        if (visited[next] == false) {
            
            answer[next] = start;
            visited[next] = true;
            dfs(next);

        }
    }
}
int main()
{
    int n;
    cin >> n;

    int a, b;

    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);
    
    for (int i = 2; i <= n; i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}