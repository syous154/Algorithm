#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int e, s, m;
	cin >> e >> s >> m;

	int ec = 1, sc = 1, mc = 1;
	int answer = 1;
	while (1) {
		if (ec > 15) {
			ec = 1;
		}
		if (sc > 28) {
			sc = 1;
		}
		if (mc > 19) {
			mc = 1;
		}
		if (ec == e && sc == s && mc == m) {
			break;
		}
		answer++;
		ec++;
		sc++;
		mc++;
	}

	cout << answer << '\n';
	return 0;

}

