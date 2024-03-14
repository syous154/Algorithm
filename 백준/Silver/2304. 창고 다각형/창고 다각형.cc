#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v(1001);
	int a, b;
	int max_y = 0;
	int max_x;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (max_y < b) {
			max_y = b;
			max_x = a;
		}
		v[a]= b;
	}
	
	int answer = 0;


	int left = 0;
	for (int i = 0; i < max_x; i++) {
		if (left < v[i]) {
			left = v[i];
			answer += left;
		}
		else {
			answer += left;
		}
	}
	int right = 0;
	for (int i = 1000; i > max_x; i--) {
		if (right < v[i]) {
			right = v[i];
			answer += right;
		}
		else {
			answer += right;
		}
	}
	cout << answer + max_y << '\n';

	return 0;
}