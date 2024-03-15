#include <iostream>
#include <map>

using namespace std; 

int main() {
	
	int n, m,val;
	map<int, bool> s1, s2;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> val;
		s1.insert({ val, true });
		
	}
	for (int i = 0; i < m; i++) {
		cin >> val;
		if (s1[val] == true) {
			s1.erase(val);
		}
		else {
			s1.insert({ val, true });
		}
	}
	cout << s1.size() << '\n';
	return 0;
}
