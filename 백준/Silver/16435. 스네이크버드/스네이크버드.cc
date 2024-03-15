#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, l;

	cin >> n >> l;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int size = l;
	for (int i = 0; i < n; i++) {
		if (size >= v[i]) {
			size++;
		}
	}
	cout << size << '\n';

	return 0;
}