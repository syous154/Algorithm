#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(nullptr);
	long long n;
	cin >> n;
	vector<long long> v;

	for (long long i = 0; i < n; i++) {
		long long val;
		cin >> val;
		v.push_back(val);
	}

	sort(v.begin(), v.end());

	long long answer = 0;

	for (long long i = 0; i < n; i++) {
		long long target = v[i];
		long long left = 0;
		long long right = n - 1;
		while (left < right) {
			if (v[left] + v[right] == target) {
				if (left != i && right != i) {	// 두 수를 합칠 때 본인은 빼고 해야함
					answer++;
					break;
				}
				else if (left == i) {
					left++;
				}
				else if (right == i) {
					right--;
				}

			}

			else if (v[left] + v[right] > target) {
				right--;
			}
			else {
				left++;
			}
		}
	}
	cout << answer << '\n';
	return 0;

}

