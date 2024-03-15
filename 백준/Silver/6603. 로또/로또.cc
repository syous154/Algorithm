#include <iostream>

using namespace std;
int lotto[6];
int number[13];
int n;

void all_case(int start, int depth) {
	if (6 == depth) {
		for (int i = 0; i < 6; i++) {
			cout << lotto[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = start; i < n; i++) {
		lotto[depth] = number[i];
		all_case(i + 1, depth + 1);
	}
}
int main() {
	
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		else {
			for (int i = 0; i < n; i++) {
				cin >> number[i];
			}
			all_case(0, 0);
			cout << '\n';
		}
	}
	return 0;
}