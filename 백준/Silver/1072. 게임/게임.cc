#include <iostream>

using namespace std;

int main() {
	
	long long x, y, z;

	cin >> x >> y;

	z = y * 100 / x ;

	long long max, min;
	max = 1000000000;
	min = 1;
	if (z >= 99) {
		cout << -1 << '\n';
		return 0;
	}

	while (min <= max) {
		long long mid = (max + min) / 2;
		long long tmp = (y + mid) * 100 / (x + mid);


		if (z < tmp) {
			max = mid - 1;
		}
		else {
			min = mid + 1;
		}

	}

	cout << min << '\n';

	return 0;
}