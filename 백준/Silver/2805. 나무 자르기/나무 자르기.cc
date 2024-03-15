#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	long long m;
	cin >> n >> m;
	vector<int> v;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		if (max < val) {
			max = val;
		}
		v.push_back(val);
	}

	long long left = 1;
	long long right = max;
	long long answer = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		long long tmp = 0;
		for (int i = 0; i < n; i++) {
			if(v[i] >= mid)
				tmp += v[i] - mid;
		}
		if (tmp >= m) {
			answer = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << answer << '\n';

	return 0;
}