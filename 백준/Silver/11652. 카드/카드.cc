#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll arr[100001];

	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	ll cnt = 1;
	ll max = 1;
	ll ans = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}

		if (max < cnt) {
			max = cnt;
			ans = arr[i];
		}
	}

	cout << ans << '\n';
}