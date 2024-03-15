#include <iostream>

using namespace std;

int main() {
	long long N;
	int cnt = 0;
	cin >> N;
	long long sum = 0;

	int i = 1;
	while (1) {
		sum += i ;
		cnt++;
		if (sum > N) {
			cnt--;
			break;
		}
        i++;
	}

	cout << cnt << '\n';

	return 0;
}