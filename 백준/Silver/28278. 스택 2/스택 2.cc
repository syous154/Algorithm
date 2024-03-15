#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	stack<int> stack;
	vector<int> v,element;
	int n, val, ele;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val;
		if (val == 1) {
			cin >> ele;
			element.push_back(ele);
		}
		v.push_back(val);
	}
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == 1) {
			stack.push(element[cnt]);
			cnt++;
		}
		else if (v[i] == 2) {
			if (stack.empty() == true) {
				cout << "-1" << '\n';
			}
			else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		}
		else if (v[i] == 3) {
			cout << stack.size() << '\n';
		}
		else if (v[i] == 4) {
			if (stack.empty() == true) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (v[i] == 5) {
			if (stack.empty() == true) {
				cout << "-1" << '\n';
			}
			else {
				cout << stack.top() << '\n';
			}
		}
	}
	return 0;
}