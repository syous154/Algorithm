#include <stdio.h>

int main() {
	int n;
	char num[100];
	int sum = 0;
	scanf("%d", &n);
	scanf("%s", num);
	for (int i = 0; i < n; i++) {
		sum += (int)num[i] - '0';
	}
	printf("%d",sum);
	return 0;
}