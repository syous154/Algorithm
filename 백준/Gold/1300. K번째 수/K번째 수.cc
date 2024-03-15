#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	long long n, k;
	cin >> n;
	cin >> k;
	
	long long left = 1;
	long long right = n * n;

	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cnt = 0;
		for (int i = 1; i <= n; i++) {
			cnt += min((mid / i), n);
		}
		if (cnt >= k) {
			answer = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
		//cout << "mid = " << mid << '\n';
		//cout << "cnt = " << cnt << '\n';
	}

	cout << answer << '\n';
	return 0;
}