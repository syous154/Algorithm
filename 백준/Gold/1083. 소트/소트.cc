#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int s;
	cin >> s;

	int first = 0;
	while (first < n && s > 0) {
		int max_idx = first;
		for (int i = first; i <= min(n - 1, first + s); i++) {
			if (v[max_idx] < v[i]) {
				max_idx = i;		// 현재 위치 + S 값의 범위 내에서 가장 큰 값의 인덱스를 가져옴
			}
		}
		for (int i = max_idx; i > first; i--) {
			swap(v[i], v[i - 1]);	// 그 값부터 앞으로 오면서 swap, swap 횟수만큼 s값 감소
			s--;
		}

		first++;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
	return 0;
	
}