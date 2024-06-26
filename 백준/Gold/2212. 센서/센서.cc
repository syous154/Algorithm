#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);

	int n, k;
	int min = 1000001, max = -1;
	vector<int> v;
	vector<int> dist;
	cin >> n;
	cin >> k;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		v.push_back(val);
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < n - 1; i++) {
		dist.push_back(v[i + 1] - v[i]);
	}
	sort(dist.begin(), dist.end(), cmp);
	
	int answer = 0;
	
	for (int i = k-1; i < n-1 ; i++) {
		answer += dist[i];
	}
	cout << answer;
	return 0;

}

