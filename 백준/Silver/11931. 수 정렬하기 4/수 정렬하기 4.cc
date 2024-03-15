#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;


bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}
