#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> graph[100001]; 
bool visited[100001] = { false, };
int result[100001];
int cnt = 0;
int cmp(int a, int b) {
	return a > b;
}
void dfs(int r) {
	if (visited[r] == true) {
		return;
	}
	visited[r] = true;
	result[r] = ++cnt;
	for (int i = 0; i < graph[r].size(); i++) {
		dfs(graph[r][i]);
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

	dfs(r);
	for (int i = 1; i <= n; i++) {
		cout << result[i]<<'\n';
	}
}