#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;

	int set = 1001, single = 1001;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		set = min(set, a);
		single = min(single, b);
	}


	int result1 = (n / 6 + 1) * set;
	int result2 = n * single;
	int result3 = (n / 6 * set) + (n % 6 * single);

	cout << min(result1, min(result2, result3)) << '\n';

	return 0;
}