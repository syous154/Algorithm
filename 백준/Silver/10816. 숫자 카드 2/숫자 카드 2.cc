#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

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
        cout << upper_bound(v.begin(), v.end(), val) - lower_bound(v.begin(), v.end(), val)<<' ';
    }
    return 0;
}