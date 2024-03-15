#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	queue<int> q;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int cnt = 0;
	while (1) {
		if (q.size() == 1) {
			break;
		}
		if (cnt % 2 == 0) {
			cout << q.front() << " ";
			q.pop();
		}
		else {
			int x = q.front();
			q.pop();
			q.push(x);
		}
		cnt++;
	}
	cout << q.front();

	return 0;
}