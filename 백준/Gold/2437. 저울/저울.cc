#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > sum + 1) {
			break;
		}
		sum += v[i];
	}

	cout << sum + 1 << '\n';
	return 0;
	
}