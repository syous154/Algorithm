#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main() {
	string s;
	cin >> s;

	stack<int> st;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] <= '9' && s[i] >= '0') {
			st.push(s[i] - '0');
		}
		else {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();

			if (s[i] == '*') {
				st.push(b * a);
			}
			else if (s[i] == '-') {
				st.push(b - a);
			}
			else if (s[i] == '+') {
				st.push(b + a);
			}
			else if (s[i] == '/') {
				st.push(b / a);

			}
		}
	}
	cout << st.top() << '\n';
}