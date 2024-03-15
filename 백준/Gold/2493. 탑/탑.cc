#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    stack < pair <int, int>> s;

    for (int i = 0; i < n; i++) {
        int top;
        cin >> top;
        while (!s.empty()) {
            if (top < s.top().first) {
                cout << s.top().second << ' ';
                break;                        //를 통해 pop하지 않고 넘어가도록 함
            }
            s.pop();
        }
        if (s.empty()) {
            cout << 0 << ' ';
        }
        s.push({ top, i + 1 });
    }
    return 0;
}