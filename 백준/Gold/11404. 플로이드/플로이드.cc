#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#define INF 987654321

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int v[101][101];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				v[i][j] = 0;
			}
			else {
				v[i][j] = INF;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a][b] = min(v[a][b], c);
	}

	for (int i = 1; i <= n; i++) {		//	중간에 거치는 부분을 가장 먼저 for문에 감싸야함
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				
				v[k][j] = min(v[k][j], v[k][i] + v[i][j]);
				
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (v[i][j] == INF) {
				cout << 0 << ' ';
			}
			else {
				cout << v[i][j] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}