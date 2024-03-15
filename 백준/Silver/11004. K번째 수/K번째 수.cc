#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    long long n, k, val;
    cin >> n >> k;
    vector<long long> v;
    
    for (long long i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    
    cout << v[k-1] << '\n';

    return 0;
}
