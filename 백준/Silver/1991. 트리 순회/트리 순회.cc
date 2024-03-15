#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#define MAX 30
using namespace std;

int v[MAX][MAX];

void preorder(int n) {
    if (n == -1) {
        return;
    }
    cout << (char)(n + 'A');
    preorder(v[n][0]);
    preorder(v[n][1]);
}

void inorder(int n) {
    if (n == -1) {
        return;
    }
    inorder(v[n][0]);
    cout << (char)(n + 'A');
    inorder(v[n][1]);
}

void postorder(int n) {
    if (n == -1) {
        return;
    }
    postorder(v[n][0]);
    postorder(v[n][1]);
    cout << (char)(n + 'A');
}


int main()
{
    int n;
    cin >> n;

    char a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int val = a - 'A';
        if (b == '.') {
            v[val][0] = -1;
        }
        else {
            v[val][0] = b - 'A';
        }
        if (c == '.') {
            v[val][1] = -1;
        }
        else {
            v[val][1] = c - 'A';
        }
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);


    return 0;
}