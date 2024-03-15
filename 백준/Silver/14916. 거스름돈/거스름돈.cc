#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int start = n / 5;
    int x = (n - start*5) % 2;
    while (x != 0){ 
        if(start == 0){
            cout << -1;
            return 0;
        } 
        start -= 1; 
        x = (n - start*5) % 2; 
    }
    cout << start + (n - start * 5) / 2;
    return 0;
}