#include<iostream>
//파스칼 삼각형
using namespace std;
int bc[1001][1001] = { 0, };

int main() {
	int n,m;
	cin >> n >> m;
	int i, j; // counters
	for (i = 0; i <= n; i++) bc[i][0] = 1;
	for (j = 0; j <= n; j++) bc[j][j] = 1;
	for (i = 1; i <= n; i++)
		for (j = 1; j < i; j++)
			bc[i][j] = (bc[i - 1][j - 1] + bc[i - 1][j])%10007;
	cout << bc[n][m] << '\n';

	
}