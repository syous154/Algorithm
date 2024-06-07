#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);
	
	long long n;
	cin >> n;

	vector<long long > v;

	for (long long i = 0; i < n; i++) {
		long long val;
		cin >> val;
		v.push_back(val);
	}
	vector<long long> answer(3);
	sort(v.begin(), v.end());
	long long min_value = 3000000001;

	for (int i = 0; i < n -2; i++) {
		long long left = i+1;
		long long right = n - 1;

		while (left < right) {
			long long sum = v[left] + v[right] + v[i];

			if (sum == 0) {
	
				cout << v[i] << ' ' << v[left] << ' ' << v[right] << '\n';
				return 0;
			}
			else {
				if (abs(sum) < min_value) {
					min_value = abs(sum);
					answer[0] = i;
					answer[1] = left;
					answer[2] = right;
				}

				if (sum < 0) {
					left++;
				}
				else {
					right--;
				}

			}
		}
	}

	for (long long i = 0; i < answer.size(); i++) {
		cout << v[answer[i]] << ' ';
	}

	return 0;

}

