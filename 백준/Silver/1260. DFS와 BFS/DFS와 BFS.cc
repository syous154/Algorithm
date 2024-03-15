#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
vector<int> graph[1001]; 
bool visited[1001] = { false, };
int result[1001] ={0,};
queue<int> q;
int cnt = 0;
void dfs(int r) {
	if (visited[r] == true) {
		return;
	}
	else {
		visited[r] = true;
		result[++cnt] = r;
		for (int i = 0; i < graph[r].size(); i++) {
			dfs(graph[r][i]);
		}
	}
}

void bfs(int r) {
	if (visited[r] == true) {
		return;
	}
	visited[r] = true;
	q.push(r);
	result[++cnt] = r;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < graph[u].size(); i++) {
			int temp = graph[u][i];
			if (visited[temp] == false) {
				cnt++;
				result[cnt] = temp;
				q.push(temp);
				visited[temp] = true;
			}
		}
	}

}
int main() {
	int n, m,r;

	cin >> n >> m>>r;
	int var1, var2;
	for (int i = 0; i < m; i++) {
		cin >> var1 >> var2;
		graph[var1].push_back(var2);
		graph[var2].push_back(var1);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(r);
	for (int i = 1; i <= n; i++) {
	if (result[i] != 0)
		cout << result[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < 1001; i++) {
		if (visited[i] = true)
			visited[i] = false;
	}
	cnt = 0;
	bfs(r);
	for (int i = 1; i <= n; i++) {
		if(result[i] != 0)
			cout << result[i] << ' ';
	}
	cout << '\n';

}