#include <iostream>

using namespace std;


int main() {
	
	long long  a, b, c;
	cin >> a >> b >> c;
	long long  sum = 1;
	while(b > 0)  {
		if (b % 2 == 1) {
			sum = (sum * a) % c;
		}
		a = ((a % c) * (a % c)) % c;
		b /= 2;
	}

	cout << sum << '\n';

	return 0;

}