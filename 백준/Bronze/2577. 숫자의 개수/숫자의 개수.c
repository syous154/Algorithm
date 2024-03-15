#include <stdio.h>

int main() {
	int n;
	int sum = 1;
	int count[10] = { 0 };
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		sum *= n;
	}
	for (int i = 0; sum > 0; i++) {
		n = sum % 10;
		count[n] += 1;
		n = sum /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;
}