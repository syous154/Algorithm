#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
bool check[8];
int rst[8];
void BT(int start, int depth) {
	if (m == depth) {
		for (int i = 0; i < m; i++) {
			cout << rst[i] << ' ';
		}
		cout << '\n';

		return;
	}
	for (int i = 0; i < n; i++) {
		
		rst[depth] = arr[i];
		BT(i + 1, depth+1);
		
	}
}
int main() {
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr,arr + n);

	BT(0, 0);
}