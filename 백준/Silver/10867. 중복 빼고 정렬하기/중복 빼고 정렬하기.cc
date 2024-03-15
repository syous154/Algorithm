#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int n;
	cin >> n;
	int num[100000];

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		if (num[i] == num[i - 1]) {
			continue;
		}
		cout << num[i] << " ";
	}

	return 0;
}