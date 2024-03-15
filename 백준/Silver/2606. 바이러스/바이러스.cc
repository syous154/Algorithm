#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> graph[100001]; 
bool visited[100001] = { false, };
int result[100001];
int cnt = 0;
void dfs(int r) {
	if (visited[r] == true) {
		return;
	}
	else {
		visited[r] = true;
		cnt++;
		for (int i = 0; i < graph[r].size(); i++) {
			dfs(graph[r][i]);
		}
	}
}
int main() {
	int n, m;

	cin >> n >> m;
	int var1, var2;
	for (int i = 0; i < m; i++) {
		cin >> var1 >> var2;
		graph[var1].push_back(var2);
		graph[var2].push_back(var1);
	}
	

	dfs(1);
	cout << cnt-1 << '\n';
	
}