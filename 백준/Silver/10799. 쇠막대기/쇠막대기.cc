#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main() {
	string s;
	cin >> s;

	int answer = 0;

	stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else {
			if (s[i - 1] == '(') {// 레이저인 경우
				st.pop();
				answer += st.size();
			}
			else {
				st.pop();
				answer++;
			}
		}
	}
	cout << answer << '\n';
	
}