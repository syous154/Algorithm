#include<iostream>
#include <vector>
#include<stack>
#include <string>
using namespace std;



int main()
{
	string s;
	stack<char> st;
	int answer = 0;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else {
			if (st.empty()) {
				answer++;
			}
			else {
				st.pop();
			}
		}
	}
	if (!st.empty()) {
		answer += st.size();
	}
	cout << answer << '\n';

	return 0;
}