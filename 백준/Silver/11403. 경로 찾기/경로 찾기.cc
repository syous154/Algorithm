#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#define INF 987654321

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int v[101][101] = { INF, };

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int val;
			cin >> val;
			if(val == 0)
				v[i][j] = INF;
			else
				v[i][j] = val;
		}
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
				cout << 1 << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}