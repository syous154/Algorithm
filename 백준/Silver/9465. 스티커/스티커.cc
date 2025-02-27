#include <iostream>

using namespace std;


int main() {
	
	int T;
	cin >> T;

	while (T--) {
		int n;
		int arr[2][100001];
		int dp[2][100001];

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[0][i];
		}
		for (int i = 0; i < n; i++) {
			cin >> arr[1][i];
		}

		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		dp[0][1] = arr[0][1] + dp[1][0];
		dp[1][1] = arr[1][1] + dp[0][0];

		for (int i = 2; i < n; i++) {
			dp[0][i] = arr[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = arr[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
		}

		cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
	}

	return 0;

}