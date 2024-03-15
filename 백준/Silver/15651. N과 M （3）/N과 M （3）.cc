#include <iostream>

using namespace std;
int num[7] = { NULL, };
int rst[7] = { NULL, };
int n, m;
void dfs(int start, int depth) {
	if (m == depth) {
		for (int i = 0; i < m; i++) {
			cout << rst[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++) {
		rst[depth] = num[i];
		dfs(i, depth + 1);
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
	dfs(0, 0);
}