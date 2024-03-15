#include <iostream>

using namespace std; 

int main() {
	int n;
	string s[10];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];

	}

	for (int i = 0; i < n; i++) {
		cout << s[i][0] << s[i][s[i].length() - 1] << '\n';
	}

	return 0;

}