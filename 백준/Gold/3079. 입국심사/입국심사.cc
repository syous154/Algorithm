#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int n, vector<long long> times) {
	long long answer = 0;
	sort(times.begin(), times.end());

	long long left = 1;
	long long right = (long long) n * (long long)times.back();


	while (left <= right) {
		long long mid = (left + right) / 2;

		long long val = 0;
		for (int i = 0; i < times.size(); i++) {
			val += (mid / (long long)times[i]);
		}

		if (val >= n) {
			answer = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return answer;
}

int main() {
	int n;
	unsigned long long m;

	cin >> n >> m;
	vector<unsigned long long> v;
	for (int i = 0; i < n; i++) {
		unsigned long long val;
		cin >> val;
		v.push_back(val);
	}
	unsigned long long answer = 0;
	sort(v.begin(), v.end());

	unsigned long long left = 1;
	unsigned long long right = m * v.back();


	while (left <= right) {
		unsigned long long mid = (left + right) / 2;

		unsigned long long val = 0;
		for (int i = 0; i < n; i++) {
			val += (mid / v[i]);
		}

		if (val >= m) {
			if(answer > mid || answer == 0)
				answer = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout<<answer<<'\n';
	return 0;
}