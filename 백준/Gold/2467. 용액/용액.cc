#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int n;
	cin >> n;

	vector<long long> v;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		if (val > max) {
			max = val;
		}
		v.push_back(val);
	}
	sort(v.begin(), v.end());

	long long left = 0;
	long long right = n - 1;
	long long min = 2000000000;
	long long ans1, ans2;

	while (left < right) {
		long long mid = v[left] + v[right];

		if (abs(min) > abs(mid)) {
			min = mid;
			ans1 = v[left];
			ans2 = v[right];
			if (mid == 0) {
				break;
			}
		}
		//cout << v[left] << ' ' << mid << ' ' << v[right] << '\n';

		if (mid < 0) {
			left += 1;
		}
		else {
			right -= 1;
		}

	}
	cout << ans1 << ' ' << ans2 << '\n';
	return 0;
}
