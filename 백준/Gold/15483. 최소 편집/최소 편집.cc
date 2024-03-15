#include <iostream>
#include <string>

using namespace std;
int dp[1002][1002] = { 0, };
int main() {
    string s1, s2;

    cin >> s1 >> s2;
    for (int i = 0; i <= s1.length(); i++) {
        dp[i][0] = i;
    }
    for (int i = 0; i <= s2.length(); i++) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= s1.length(); i++) {
        for (int j = 1; j <= s2.length(); j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
                dp[i][j] = min(dp[i - 1][j-1] + 1, dp[i][j]);
            }
        }
    }
    cout << dp[s1.length()][s2.length()] << '\n';

    return 0;
}