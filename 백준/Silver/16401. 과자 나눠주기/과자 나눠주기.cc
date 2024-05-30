#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	int m, n;
	cin >> m >> n;

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

	long long left = 1;
	long long right = max + 1;
	long long answer = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] / mid > 0 && mid ) {
				cnt += v[i] / mid;
			}
		}
		if (cnt >= m) {
			answer = mid;
			left = mid + 1;
		}
		else if (cnt < m) {
			right = mid - 1;
		}
	}
	cout << answer << '\n';
    return 0;
}
