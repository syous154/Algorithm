#include <iostream>

using namespace std;

int main() {
	long long x;
	int n, a, b;
	cin >> x >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		x -= (a * b);
	}

	if (x == 0) {
		cout << "Yes" << '\n';
	}
	else {
		cout << "No" << '\n';
	}
}