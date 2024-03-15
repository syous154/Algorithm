#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	vector<long long> v;
	long long min = 1000001;
	for (int i = 0; i < k; i++) {
		long long val;
		cin >> val;
		if (min < val) {
			min = val;
		}
		v.push_back(val);
	}

	long long max = min;
	min = 1;
	long long mid = (max+min)/2;
	long long result = 0;

	while (min <= max) {
		long long cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += v[i] / mid;
		}
		
		if (cnt < n) {
			max = mid-1;
			mid = (max + min) / 2;
		}
		else if (cnt >= n) {
			result = mid;
			min = mid + 1;
			mid = (max + min) / 2;
		}
		
	}
	cout << result << '\n';
	return 0;
}