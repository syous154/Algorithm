#include <stdio.h>

int main() {
	int n,num;
	int numbers[10000];
	scanf("%d %d", &n, &num);
	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}
	for (int i = 0; i < n; i++) {
		if (num > numbers[i]) {
			printf("%d ", numbers[i]);
		}
	}
	return 0;
}