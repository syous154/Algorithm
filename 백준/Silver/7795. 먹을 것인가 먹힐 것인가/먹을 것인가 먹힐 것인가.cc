#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int T;
	cin >> T;

	while (T--) {
		int n, m;
		cin >> n >> m;

		vector<int> a, b;
		int val;
		for (int i = 0; i < n; i++) {
			cin >> val;
			a.push_back(val);
		}
		for (int i = 0; i < m; i++) {
			cin >> val;
			b.push_back(val);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int result = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] > b[j]) {
					result++;
				}
				else {
					break;
				}
			}
		}

		cout << result << '\n';

	}

	return 0;

}