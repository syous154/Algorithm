#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;


int cmp(int a, int b) {
    return a > b;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int c, n;
        cin >> c >> n;
        vector<int> v;

        int a, b;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            v.push_back(a*b);
        }
        sort(v.begin(), v.end(),cmp);

        for (int i = 0; i < n; i++) {
            c -= v[i];
            if (c <= 0) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}
