#include <iostream>
#include <algorithm>
#include <map>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        m[s]++;
    }
    
    int answer = 0;
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        answer = max(answer, iter->second);
    }

    for (auto iter = m.begin(); iter != m.end(); iter++) {
        if (answer == iter->second) {
            cout << iter->first << '\n';
            return 0;
        }
    }
    return 0;
}
