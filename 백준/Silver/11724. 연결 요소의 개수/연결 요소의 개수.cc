#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[1001];
int visited[1001] = { false, };

void search(int node) {
	visited[node] = true;

	for (int i = 0; i < graph[node].size(); i++) {
		int next_node = graph[node][i];
		if (visited[next_node] != true) {
			search(next_node);
		}
	}
}

int main() {
	
	int n, v, result = 0;
	cin >> n >> v;


	for (int i = 0; i < v; i++) {
		int v1, v2;
		cin >> v1 >> v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);

	}

	for (int i = 1; i <= n; i++) {
		if (visited[i] != true) {
			search(i);
			result++;
		}
	}

	cout << result << '\n';

	return 0;

}