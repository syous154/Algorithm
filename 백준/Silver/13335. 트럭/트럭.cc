#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, w, l;
	cin >> n >> w >> l;

	vector<int> truck;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		truck.push_back(val);
	}

	int cnt = 0;		
	int w_sum = 0;

	for (int i = 0; i < n; i++) {
		while (1) {
			if (q.size() == w) {		// 다리에 트럭이 가득찼다는 의미 -> 맨앞의 트럭은 빠져 나갈 때이다.
				w_sum -= q.front();
				q.pop();
			}
			if (w_sum + truck[i] <= l) {
				break;
			}
			q.push(0);
			cnt++;
		}
		q.push(truck[i]);
		w_sum += truck[i];
		cnt++;
	}
	cout << cnt + w << '\n';
	return 0;
}