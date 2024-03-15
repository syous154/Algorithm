#include <iostream>
using namespace std;
 
int main() {
    int a;
    cin >> a;
 
    int rst = 0;
    while (a>0) {
        if (a % 2 == 1) {
            rst++;
        }
        a /= 2;
    }
 
    cout << rst;
 
}