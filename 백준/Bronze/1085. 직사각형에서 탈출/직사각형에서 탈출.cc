#include <iostream>

using namespace std;

int main() {
	int x, y,w,h;

	cin >> x >> y >> w >> h;
	if (x < (w / 2) && y <= (h / 2)) {
		if (x > y) {
			cout << y << '\n';
		}
		else {
			cout << x << '\n';
		}
	}
	else if (x < (w / 2) && y >= (h / 2)) {
		if (x > (h-y)) {
			cout << h-y << '\n';
		}
		else {
			cout << x << '\n';
		}
	}
	else if (x >= (w / 2) && y < (h / 2)) {
		if ((w-x) > y) {
			cout << y << '\n';
		}
		else {
			cout << w - x << '\n';
		}
	}
	else if (x >= (w / 2) && y > (h / 2)) {
		if ((w-x) > (h-y)) {
			cout << h-y << '\n';
		}
		else {
			cout << w - x << '\n';
		}
	}
	else {
		if ((w / 2) > (h / 2)) {
			cout << h / 2 << '\n';
		}
		else
			cout << w / 2 << '\n';
	}
	return 0;
}