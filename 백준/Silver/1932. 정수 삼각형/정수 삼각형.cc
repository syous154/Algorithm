#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int dp[501][501] = { 0, };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
		}
	}
	int answer = dp[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				dp[i][j] += dp[i - 1][0];
			}
			else if (i == j){
				dp[i][j] += dp[i - 1][j - 1];
			}
			else {
				dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
			}
			answer = max(answer, dp[i][j]);
		}
	}

	cout << answer << '\n';
    return 0;
}
