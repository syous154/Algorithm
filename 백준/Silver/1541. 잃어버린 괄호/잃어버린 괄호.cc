#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int answer = 0;
	bool minus = false;
	string num;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.length()) {
			if (minus) {
				answer -= stoi(num);
				num = "";
			}
			else {
				answer += stoi(num);
				num = "";
			}
		}
		else {
			num += s[i];
		}
		if (s[i] == '-') {
			minus = true;
		}
	}
	cout << answer << '\n';
	return 0;
	
}