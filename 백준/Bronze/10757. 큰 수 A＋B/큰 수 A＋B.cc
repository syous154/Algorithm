#include <iostream>
#include <vector>
#include <string>
using namespace std;

int num1[10001] = {0,}, num2[10001] = {0,};
string s1, s2;
vector <int> answer;
int main() {

	cin >> s1 >> s2;
	int idx = 0;
	if (s1.length() < s2.length())
	{
		string tmp = s1;
		s1 = s2;
		s2 = tmp;
	}
	for (int i = s1.length() - 1; i >= 0; i--) {
		num1[idx++] = s1[i] - '0'; //역순으로 배열에 저장
	}
	idx = 0;
	for (int i = s2.length() - 1; i >= 0; i--) {
		num2[idx++] = s2[i] - '0'; //역순으로 배열에 저장
	}
	int i;
	for (i = 0; i < s1.length(); i++) {
		int sum = num1[i] + num2[i];
		if (sum >= 10) {
			num1[i + 1]++;
			sum %= 10;
		}
		answer.push_back(sum);
	}
	if(num1[i] != 0)
		answer.push_back(num1[i]);
	for (int i = answer.size() - 1; i >= 0; i--) {
		cout << answer[i];
	}
	return 0;
}