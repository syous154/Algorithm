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
    stack<int> st;

    while (n--) {
        string s;
        int val;

        cin >> s;

        if (s == "push") {
            cin >> val;
            st.push(val);
        }
        else if (s == "pop") {
            if (st.empty()) {
                cout << "-1" << '\n';
            }
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (s == "size") {
            cout << st.size() << '\n';
        }
        else if (s == "empty") {
            if (st.empty()) {
                cout << '1' << '\n';
            }
            else {
                cout << '0' << '\n';
            }
        }
        else if (s == "top") {
            if (st.empty()) {
                cout << "-1" << '\n';
            }
            else {
                cout << st.top() << '\n';
            }
        }
    }
    return 0;
}