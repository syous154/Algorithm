#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ti[1000], si[1000];
int result[1000];

void solve(void) {
	int i, j, temp;
	for (i = 0; i < n; i++) {
		result[i] = i;
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (ti[result[j]] * si[result[j + 1]] > ti[result[j + 1]] * si[result[j]]) {
				temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}
}
int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ti[i] >> si[i];
	}
	solve();
	for (int i = 0; i < n; i++) {
		cout << result[i] + 1 << " ";
	}

	return 0;
}