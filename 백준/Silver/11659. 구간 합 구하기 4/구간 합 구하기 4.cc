#include <iostream>
using namespace std;
#define MAX 100001

int num[MAX];

int main(int argc, char * argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M, inputNum = 0, i, j;
	cin >> N >> M;

	for (int h = 1; h < N + 1; h++) {
		cin >> inputNum;
		num[h] = num[h - 1] + inputNum;
	}

	for (int h = 0; h < M; h++) {
		cin >> i >> j;
		cout << num[j] - num[i - 1] << "\n";
	}

	return 0;
}