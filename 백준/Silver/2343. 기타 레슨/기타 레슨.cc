#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v;

	int start = 0;
	int end = 0;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		if (start < val) {
			start = val;
		}
		end += val;
		v.push_back(val);
	}
	int answer;
	while (start <= end) {
		int mid = (start + end) / 2;
		int cnt = 0;
		int sum = 0;

		for (int i = 0; i < n; i++) {
			if (sum + v[i] > mid) {
				sum = 0;
				cnt++;
			}
			sum += v[i];
		}
		if (sum != 0) {
			cnt++;
		}

		if (cnt > m) {
			start = mid + 1;
		}
		else {
			answer = mid;
			end = mid - 1;
		}
	}
	cout << answer << '\n';

	return 0;
}