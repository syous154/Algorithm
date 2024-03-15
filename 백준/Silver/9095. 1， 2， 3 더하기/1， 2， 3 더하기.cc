#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t_case, val;
    cin >> t_case;
    vector<int> t;
    for (int i = 0; i < t_case; i++) {
        cin >> val;
        t.push_back(val);
    }
    for (int k = 0; k < t_case ; k++) {
        int idx = t[k];
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(4);
        if (idx < 3) {
            cout << v[idx-1] << '\n';
        }
        else {
            for (int i = 3; i < idx; i++) {
                v.push_back(v[i - 3] + v[i - 2] + v[i - 1]);
            }
            cout << v[idx-1] << '\n';

        }
        v.clear();

    }
    return 0;
}