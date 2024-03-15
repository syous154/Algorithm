#include <iostream>

using namespace std; 

int main() {
	
	int n;
	int max = 0;
	int x, y;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> n;
			if (n >= max) {
				max = n;
				x = i;
				y = j;
			}
		}
	}
	cout << max << '\n' << x << ' ' << y <<'\n';

	return 0;
}