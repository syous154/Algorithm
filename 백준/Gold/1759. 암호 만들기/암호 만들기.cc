#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
char candidate[15] = { NULL, };
char code[15] = { NULL, };
int L, C;

void all_case(int start, int depth) {
	if (L == depth) {
		int mo = 0, ja = 0;
		for (int i = 0; i < L; i++) {
			if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u') {
				mo++;
			}
			else {
				ja++;
			}
		}
		if (mo >= 1 && ja >= 2) {
			for (int i = 0; i < L; i++) {
				cout << code[i];
			}
			cout << '\n';

		}
		return;
	}
	for (int i = start; i < C; i++) {
		code[depth] = candidate[i];
		all_case(i + 1, depth + 1);
	}
}

int main() {
	
	cin >> L >> C;

	for (int i = 0; i < C; i++) {
		cin >> candidate[i];
	}
	sort(candidate, candidate + C);
	all_case(0, 0);
	cout << '\n';
}