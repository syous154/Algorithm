#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		v.push_back(val);
	}
	sort(v.begin(), v.end());
	int result = 0;
	for (int i = 0; i < n; i++) {
		result = max(result, (n - i) * v[i]);
	}
	cout << result << '\n';
	return 0;
}