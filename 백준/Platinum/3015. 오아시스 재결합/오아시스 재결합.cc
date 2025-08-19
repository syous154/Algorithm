#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 스택에는 (키, 같은 키의 연속 개수)
    stack<pair<long long, long long>> st;
    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        long long h; 
        cin >> h;

        long long same = 1; // 자기 자신 1명부터 시작

        // 1) 현재 키보다 작은 키는 전부 pop 하며 쌍 수 추가
        while (!st.empty() && st.top().first < h) {
            ans += st.top().second;   // pop되는 사람 수만큼 현재와 서로 볼 수 있음
            st.pop();
        }

        // 2) 같은 키 처리: 묶어서 개수 합치고, 그 개수만큼 정답에 더함
        if (!st.empty() && st.top().first == h) {
            long long cnt = st.top().second;
            ans += cnt;               // 같은 키끼리는 서로 전부 볼 수 있음
            st.pop();
            same += cnt;              // 같은 키 연속 개수 합치기

            // 3) 같은 키를 합친 뒤에도 스택에 더 큰 키가 남아 있으면 그 사람 1명은 서로 볼 수 있음
            if (!st.empty()) ans += 1;

            st.push({h, same});
        } else {
            // 4) 더 큰 키가 아직 스택 위에 남아 있으면 그 1명은 현재와 볼 수 있음
            if (!st.empty()) ans += 1;
            st.push({h, 1});
        }
    }

    cout << ans << '\n';
    return 0;
}
