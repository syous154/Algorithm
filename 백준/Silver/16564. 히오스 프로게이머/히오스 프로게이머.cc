#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// n = 캐릭터의 수
// k = 올릴 수 있는 레벨 수

int main() {
	int n;
	long long k;
	cin >> n >> k;
    long long max = 0;
	vector<long long> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
        if(max < v[i])
            max = v[i];
	}
	long long left = 1;
	long long right = max + k;   //가능한 최대 팀 목표레벨은 가장 레벨이 높은 캐릭터에 + k 한 값

	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;		// 팀 목표레벨을 mid라고 가정

		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] < mid) {				// 어느 한 캐릭터가 팀 목표레벨 보다 작으면
				sum += mid - v[i];			// 얼마나 작은지를 sum에 누적합
			}
		}

		if (k < sum) {		// 모든 캐릭터가 팀 목표레벨에 부족한 값이 주어진 k보다 크면 right 조정
			right = mid - 1;
		}
		else {								// k 보다 작으면 answer에 mid 저장 후, left 조정
			answer = mid;
			left = mid + 1;
		}
	}
	cout << answer << '\n';

	return 0;
}