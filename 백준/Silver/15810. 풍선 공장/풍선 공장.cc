#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	vector<long long> v;
	long long max = 0;
	for (long long i = 0; i < n; i++) {
		long long val;
		cin >> val;
		if (max < val)
			max = val;
		v.push_back(val);
	}

	long long left = 0;
	long long right = max * m;
	
	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		
		long long poong = 0;

		for (long long i = 0; i < n; i++) {
			poong += (mid / v[i]);
		}

		if (poong >= m) {
			answer = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	cout << answer << '\n';
	return 0;
}