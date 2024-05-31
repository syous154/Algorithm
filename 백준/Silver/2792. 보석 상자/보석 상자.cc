#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);
	int n, m;
	cin>>n >> m;

	int max = 0;
	vector<int> v;
	for (int i = 0; i < m; i++) {
		int val;
		cin >> val;
		if (val > max) {
			max = val;
		}
		v.push_back(val);
	}


	int left = 1;
	int right = max;
	int answer = 0;
	while (left <= right) {
		int mid = (left + right) / 2;

		int cnt = 0;
		for (int i = 0; i < m; i++) {
			if (v[i] / mid) {
				cnt += v[i] / mid;
			}
			if (v[i] % mid != 0) {
				cnt += 1;
			}
		}

		if (cnt <= n) {
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

