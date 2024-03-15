#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int search(int val, int s, int e) {
    while (s <= e) {
        int mid = (s + e) / 2;
        if (v[mid] == val) {
            return 1;
        }
        else if (v[mid] < val) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, val;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        cout << search(val, 0, n - 1) << '\n';

    }
    return 0;
}