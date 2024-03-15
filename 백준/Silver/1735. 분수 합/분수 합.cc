#include <iostream>

using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main() {
	int a, b, x, y;
	cin >> a >> b;
	cin >> x >> y;

	int bj1, bj2, bm;
	bj1 = a * y;
	bj2 = x * b;
	bm = b* y;
	
	int bj = bj1 + bj2;
	int div = gcd(bj, bm);

	cout << bj/div << ' ' << bm / div << '\n';

	return 0;
}