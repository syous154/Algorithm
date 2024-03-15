#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> graph[100001]; 
bool visited[100001] = { false, };
int result[100001];
queue<int> q;
int cnt = 0;
int cmp(int a, int b) {
	return a > b;
}
void bfs(int r) {
	if (visited[r] == true) {
		return;
	}
	visited[r] = true;
	q.push(r);
	result[r] = ++cnt;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < graph[u].size(); i++) {
			int temp = graph[u][i];
			if (visited[temp] == false) {
				cnt++;
				result[temp] = cnt;
				q.push(temp);
				visited[temp] = true;
			}
		}
	}
	
}
int main() {
	int n, m, r;

	cin >> n >> m >> r;
	int var1, var2;
	for (int i = 0; i < m; i++) {
		cin >> var1 >> var2;
		graph[var1].push_back(var2);
		graph[var2].push_back(var1);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end(),cmp);
	}

	bfs(r);
	for (int i = 1; i <= n; i++) {
		cout << result[i]<<'\n';
	}
}