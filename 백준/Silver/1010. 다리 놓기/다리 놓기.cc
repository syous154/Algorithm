#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    while (num--) {
        int n, m;
        cin >> n >> m;

        long long rst = 1;

        int r = 1;
        for (int i = m; i > m - n; i--) {
            rst *= i;
            rst /= r++;
        }
        cout << rst << '\n';
    }
    return 0;
}