#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    map <string, int> poketmon;
    vector <string> name;
    int n, m;
    string str;
    cin >> n >> m;
    vector<string> result;
    for (int i = 1; i <= n; i++) {
        cin >> str;
        name.push_back(str);
        poketmon.insert(make_pair(str, i));
    }
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (str[0] >= 65 && str[0] <= 90) {
            result.push_back(to_string(poketmon[str]));
        }
        else 
        {
            result.push_back(name[stoi(str) - 1]);
            
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n'; 
    }
    return 0;
}