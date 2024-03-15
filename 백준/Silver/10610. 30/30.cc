#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	string s;
	cin >> s;
	int sum = 0;
	bool flag = false;
	vector<int> v;
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s[i] - '0');

		sum += s[i] - '0';
		
		if (s[i] == '0') {
			flag = true;
		}
	}

	if (sum % 3 == 0 && flag) {
		sort(v.begin(), v.end(), cmp);

		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
		cout << '\n';
	}
	else {
		cout << "-1" << '\n';
	}
	return 0;
	
}