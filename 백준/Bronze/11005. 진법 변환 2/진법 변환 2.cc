#include <iostream>
#include <vector>

using namespace std; 

int main() {
	
	long long n;
	int b, k;
	vector<int> v;
	cin >> n >> b;

	while (1) {
		if (n < b) {
			v.push_back(n);
			break;
		}

		k = n % b;
		n = n / b;

		v.push_back(k);
	}
	int size = v.size();

	for (int i = 0; i < size; i++) {
		if (v.back() > 9) {
			cout << char(v.back() + 55);
		}
		else {
		cout << v.back();
		}
		v.pop_back();
	}
	return 0;
}
