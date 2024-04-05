#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int x;
	cin >> x;


	sort(v.begin(), v.end());

	int answer = 0;

	int left = 0, right = n - 1;

	while (1) {
		if (left >= right) {
			break;
		}
		if (v[left] + v[right] == x) {
			answer++;
			right--;
			left++;
		}
		else if (v[left] + v[right] > x) {
			right--;
		}
		else if (v[left] + v[right] < x) {
			left++;
		}
	}

	cout << answer << '\n';
	return 0;

}

