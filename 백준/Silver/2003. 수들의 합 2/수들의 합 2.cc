#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int n, m;
	int answer = 0;
	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += v[j];
			if (sum == m) {
				answer++;
				break;
			}
		}
	}

	cout << answer << '\n';
	return 0;

}

