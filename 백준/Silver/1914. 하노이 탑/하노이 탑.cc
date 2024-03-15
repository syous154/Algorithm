#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;
void hanoi_tower(int n, int from, int tmp, int to) {
	if (n == 1) {
		cout << from << " " << to << '\n';
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		cout << from << " " << to << '\n';
		hanoi_tower(n - 1, tmp, from, to);
	}
}
int main() {
	int n;
	cin >> n;
	
	string a = to_string(pow(2, n));

	int x = a.find('.');				
	a = a.substr(0, x);			
	a[a.length() - 1] -= 1;

	cout << a << endl;
    if(n <= 20){
    	hanoi_tower(n, 1, 2, 3);
    }
    return 0;
}