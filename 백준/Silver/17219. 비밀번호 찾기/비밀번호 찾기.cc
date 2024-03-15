#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;

	map<string, string> memo;

	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;

		memo.insert({ s1,s2 });
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		
		cout << memo.find(s)->second << '\n';
		
	}
	
}