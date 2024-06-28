#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		// priority_queue를 선언할 때는 priority_queue<자료형, 구현체, 비교연산자> 형태로 선언
		priority_queue<long long,vector<long long>, greater<long long>> pq;
		long long answer = 0;
		
		for (int i = 0; i < n; i++) {
			int val;
			cin >> val;
			pq.push(val);
		}

		while (pq.size() > 1) {
			long long sum = 0;

			sum += pq.top();
			pq.pop();
			sum += pq.top();
			pq.pop();
			answer += sum;
			pq.push(sum);
		}

		cout << answer << '\n';
	}

	return 0;

}

