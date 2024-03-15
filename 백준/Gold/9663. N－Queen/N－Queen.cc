#include <iostream>

using namespace std;
int n, x, y;
int board[15] = { 0, };
int cnt = 0;
bool check(int k) {
    for (int i = 0; i < k; i++)
        if (k - i == abs(board[k] - board[i]) || board[k] == board[i])
            return false;
    return true;
}
void dfs(int depth) {
    if (depth == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        board[depth] = i;

        if (check(depth)) {
            dfs(depth + 1);
        }
    }

}
int main() {
    cin >> n;

    dfs(0);

    cout << cnt << '\n';
}