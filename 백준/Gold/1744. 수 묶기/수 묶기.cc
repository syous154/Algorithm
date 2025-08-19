#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 1) {
        long long val;
        cin >> val;
        cout << val << '\n';
        return 0;
    }

    // 입력은 그대로 받되, 그룹별로 분리해 처리
    vector<int> v;
    v.reserve(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }

    // ---- 여기부터 추가/수정: 그룹 분리 ----
    vector<int> pos;   // > 1
    vector<int> neg;   // < 0
    int ones = 0;      // == 1
    int zeros = 0;     // == 0

    for (int x : v) {
        if (x > 1) pos.push_back(x);
        else if (x == 1) ones++;
        else if (x == 0) zeros++;
        else neg.push_back(x); // x < 0
    }

    // 정렬: 양수(>1)는 내림차순, 음수는 오름차순
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end());

    long long sum = 0;

    // 1은 곱하지 말고 더하기
    sum += ones;

    // 양수(>1) 두 개씩 곱
    for (size_t i = 0; i + 1 < pos.size(); i += 2) {
        sum += 1LL * pos[i] * pos[i + 1];
    }
    if (pos.size() % 2 == 1) sum += pos.back(); // 하나 남으면 그냥 더함

    // 음수 두 개씩 곱
    for (size_t i = 0; i + 1 < neg.size(); i += 2) {
        sum += 1LL * neg[i] * neg[i + 1];
    }
    // 음수가 하나 남으면 0이 있으면 소거, 없으면 더함
    if (neg.size() % 2 == 1) {
        if (zeros == 0) sum += neg.back();
        // zeros > 0 이면 0과 곱해 0이 되므로 더하지 않음
    }

    cout << sum << '\n';
    return 0;
}
