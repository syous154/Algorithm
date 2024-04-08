#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> v1(n);
	vector<int> v2(m);
	vector<int> answer;

	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}
	for (int j = 0; j < m; j++) {
		cin >> v2[j];
	}

	int idx1 = 0, idx2 = 0;
	while (1) {
		if (idx1 == n || idx2 == m) {
			break;
		}
		if (v1[idx1] < v2[idx2]) {
			answer.push_back(v1[idx1]);
			idx1++;
		}
		else {
			answer.push_back(v2[idx2]);
			idx2++;
		}
	}
	if (idx1 == n) {
		for (int i = idx2; i < m; i++) {
			answer.push_back(v2[i]);
		}
	}
	else if (idx2 == m) {
		for (int i = idx1; i < n; i++) {
			answer.push_back(v1[i]);
		}
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << ' ';
	}

	return 0;

}

