#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;

	while (test--) {
		int n;
		cin >> n;
		map<string, int> m;
		string s1, s2;
		int ans = 1;
		for (int i = 0; i < n; i++) {
			cin >> s1 >> s2;
			if (m.find(s2) != m.end()) {
				m.find(s2)->second = m.find(s2)->second + 1;
			}
			else {
				m.insert({ s2, 1 });
			}
		}
		for (auto iter = m.begin(); iter != m.end(); iter++)
		{
			ans *= iter->second+1;
		}
	
		cout << ans - 1 << '\n';
	}
}