#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

string n;
int k;

void bfs(string s, int cnt) {

    int length = s.size();
    queue<string> q;
    q.push(s);

    for (int p = 0; p < cnt; p++) {
        set<string> visit;
        int size = q.size();
        for(int qq = 0; qq < size; qq++){
            string origin = q.front();
            q.pop();

            if (visit.count(origin) > 0) {
                continue;
            }
            
            visit.insert(origin);

            for (int i = 0; i < origin.size() - 1; i++) {
                for (int j = i+1; j < origin.size(); j++) {
                    
                    if (i == 0 && origin[j] == '0') {   // 앞에 0이 오는 경우 방지
                        continue;
                    }
                    string ns = origin;

                    ns[i] = origin[j];
                    ns[j] = origin[i];

                    //cout<<ns<<'\n';
                    q.push(ns);
                }
            }
        }
    }
    
     string max = "-1";

    int n = q.size();

    for (int i = 0; i < n; i++) {

        int a = stoi(max);
        int b = stoi(q.front());
        if (a < b) {
            max = q.front();
        }
        q.pop();
    }
    if (max[0] == '0') {
        cout << "-1" << '\n';
        return;
    }
    else {
        cout << max << '\n';
        return;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;

    bfs(n, k);
    return 0;
}