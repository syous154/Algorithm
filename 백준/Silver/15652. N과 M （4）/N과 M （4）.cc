#include <iostream>

using namespace std;
int num[8] = { NULL, };
int rst[8] = { NULL, };
int n, m;
void dfs(int start, int depth) {
	if (m == depth) {
		for (int i = 0; i < m; i++) {
			cout << rst[i] << ' ';
		}
		cout << '\n';
		return;
	}
	
	for (int i = start - 1; i < n - 1; i++) {
		rst[depth] = num[i]+1;
		dfs(i+1, depth + 1);
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
	dfs(0, 0);
}