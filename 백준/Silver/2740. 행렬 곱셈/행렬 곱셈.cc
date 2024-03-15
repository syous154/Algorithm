#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
    int a[101][101];
    int b[101][101];
    int rst[101][101];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>>a[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int k = 0; k < m; k++) {
				rst[i][j] += a[i][k] * b[k][j];
			}
			cout << rst[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}