#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int n;

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	stack<int> st;

	int idx = 0;
	int goal = 1;
	while (1) {
		if (idx < n && v[idx] == goal) {
			idx++;
			goal++;
		}
		else if (!st.empty() && st.top() == goal) {
			goal++;
			st.pop();
		}
		else if (idx < n) {
			st.push(v[idx]);
			idx++;
		}
		else if (goal > n) {
			cout << "Nice" << '\n';
			return 0;
		}
		else {
			cout << "Sad" << '\n';
			return 0;
		}
	}
	
}