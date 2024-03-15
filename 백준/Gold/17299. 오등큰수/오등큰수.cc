#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
	int n;
	stack<int> s;

	cin >> n;

	vector<int> rst(n + 1, -1);
	vector<int> val(n + 1);
	vector<int> cnt(1000000 + 1, 0);
	
	for (int i = 1; i <= n; i++) {
		cin >> val[i];
		cnt[val[i]] += 1;
	}

	for (int i = 1; i <= n; i++) {
		while (!s.empty() && cnt[val[s.top()]] < cnt[val[i]]) {
			rst[s.top()] = val[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 1; i <= n; i++) {
		cout << rst[i] << " ";
	}
	return 0;
}