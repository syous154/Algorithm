#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	map<string, int> maraton;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (maraton.find(s) != maraton.end()) {
			maraton.find(s)->second++;
		}
		else {
			maraton.insert({ s,1 });
		}
	}

	for (int i = 0; i < n-1; i++) {
		string s;
		cin >> s;
		maraton.find(s)->second--;
	}
	for (auto iter = maraton.begin(); iter != maraton.end(); iter++) {
		if (iter->second != 0) {
			cout << iter->first << '\n';
		}
	}
	return 0;
}