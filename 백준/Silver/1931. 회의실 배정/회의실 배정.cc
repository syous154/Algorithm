#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;

	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end(),cmp);
	int end, answer = 1;
	end = v[0].second;

	for (int i = 1; i < n; i++) {
		if (end <= v[i].first) {
			end = v[i].second;
			answer++;
		}
	}

	cout << answer << '\n';
	return 0;
	
}