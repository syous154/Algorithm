#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	int dasom;
	for (int i = 0; i < n; i++) {
		int val;
		if (i == 0) {
			cin >> dasom;
		}
		else {
			cin >> val;
			v.push_back(val);
		}
	}
	
	int cnt = 0;
	while (1) {
		int max = 0;
		int m_idx = 0;
		for (int i = 0; i < n - 1; i++) {
			if (max < v[i]) {
				max = v[i];
				m_idx = i;
			}
		}
		if (dasom > max) {
			cout << cnt << '\n';
			break;
		}
		dasom += 1;
		v[m_idx] -= 1;
		cnt++;


	}
}