#include <iostream>
using namespace std;

int main() {
	int n, result = 0;
	int tmp, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		for (int j = 1; j <= tmp; j++) {
			if (tmp%j == 0)
				cnt++;
		}
		if (cnt == 2)	
			result++;
		cnt = 0;
	}
	cout << result << '\n';
}