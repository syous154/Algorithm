#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 0;

	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		int len = v[i].length();
		stack<char> st;
		st.push(v[i][0]);

		for (int j = 1; j < len; j++) {
			if (!st.empty() && st.top() == v[i][j]) {
				st.pop();
			}
			else {
				st.push(v[i][j]);
			}
		}

		if (st.empty()) {
			answer++;
		}
	}

	cout << answer << '\n';

	return 0;
	
}