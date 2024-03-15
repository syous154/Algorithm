#include <iostream>

using namespace std;


int main() {
	int num;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum = sum + (num * num);
	}
	int rst = sum % 10;

	cout << rst << endl;

	return 0;
}