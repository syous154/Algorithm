#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		v.push_back(val);
	}
	int max = v[n - 1];
	int result = 0;
	for (int i = n - 2; i >= 0; i--) {
		while (v[i] >= max) {
			v[i] -= 1;
			result++;
		}
		max = v[i];
	}

	cout << result << '\n';

}