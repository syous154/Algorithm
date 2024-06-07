#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
	return a + b > b + a;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);

	int n;
	cin >> n;

	vector<string> v;
	bool zero = true;
	for (int i = 0; i < n; i++) {
		string val;
		cin >> val;
		if (val != "0") {
			zero = false;
		}
		v.push_back(val);
	}
	string answer = "";
	if (zero) {
		answer += "0";
	}
	else {
		sort(v.begin(), v.end(), cmp);
		answer = "";

		for (int i = 0; i < n; i++) {
			answer += v[i];
		}
	}
	cout << answer << '\n';
	return 0;

}

