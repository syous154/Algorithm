#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long s, c;

	cin >> s >> c;
	vector<long long> v;
	long long max = 0;
	long long all = 0;
	for (long long i = 0; i < s; i++) {
		int val;
		cin >> val;
		v.push_back(val);
		all += val;
		if (val > max)
			max = val;
	}

	long long left = 1;
	long long right = max;

	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cnt = 0;
		long long sum = 0;
		for (long long i = 0; i < s; i++) {
			sum += (v[i] / mid);
		}

		if (sum >= c) {
			answer = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	cout << all - (answer * c) << '\n';
	return 0;
}