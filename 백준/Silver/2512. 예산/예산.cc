#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	long long m;
	cin >> n;
	vector<int> v;
	long long max = 0;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		sum += val;
		v.push_back(val);
		if (val > max) {
			max = val;
		}
	}
	cin >> m;

	if (sum < m) {
		cout << max << '\n';
		return 0;
	}
	else {
		long long left = 1;
		long long result = 0;
		long long right = max;

		while (left <= right) {
			long long mid = (left + right) / 2;
			long long s = 0;
			for (int i = 0; i < n; i++) {
				if (v[i] > mid) {
					s += mid;
				}
				else {
					s += v[i];
				}
			}

			if (s <= m) {
				result = mid;
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		cout << result << '\n';

	}
	return 0;
}