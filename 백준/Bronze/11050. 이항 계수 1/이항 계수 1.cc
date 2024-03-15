#include <iostream>

using namespace std;

int main() {
    int n, k;
    int n_f = 1, k_f = 1;
    int n_k_f = 1;
    cin >> n >> k;
    for (int i = n; i > 0; i--) {
        n_f *= i;
    }
    for (int i = k; i > 0; i--) {
        k_f *= i;
    }
    for (int i = n-k; i > 0; i--) {
        n_k_f *= i;
    }
    cout << n_f / (k_f * n_k_f) << '\n';

    return 0;
}