#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long int m[1001] = { 1,2 };

	int n;

	cin >> n;

	for (int i = 2; i <= n + 1; i++) {

		m[i] = m[i - 1] + m[i - 2];
		m[i] %= 10007;
	}

	cout << m[n - 1];

    return 0;
}
