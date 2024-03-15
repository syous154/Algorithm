#include <iostream>

using namespace std;
int n,m;
int num[10] = { 0, };
int rst[10] = { 0, };
void dfs(int start, int depth) {
	if (m == depth) {
		for (int i = 0; i < m; i++) {
			cout << rst[i] << " ";
		}
		cout << '\n';
	}
	for (int i = start; i < n; i++) {
		rst[depth] = num[i];
		dfs(i + 1, depth + 1);
	}
}
int main() {
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
	dfs(0, 0);

}