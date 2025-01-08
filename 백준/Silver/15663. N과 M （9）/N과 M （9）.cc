#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
bool check[8];
int rst[8];
void BT(int depth) {
	if (m == depth) {
		for (int i = 0; i < m; i++) {
			cout << rst[i] << ' ';
		}
		cout << '\n';

		return;
	}
	int last = 0;

	for (int i = 0; i < n; i++) {
		if (check[i] == false && arr[i] != last) {
			check[i] = true;
			rst[depth] = arr[i];
			last = rst[depth];
			BT(depth + 1);
			check[i] = false;
		}
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	BT(0);
}