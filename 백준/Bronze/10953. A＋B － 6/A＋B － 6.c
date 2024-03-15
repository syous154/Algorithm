#include <stdio.h>

int main() {
	int a, b;
	char c;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%c%d", &a, &c, &b);
		printf("%d\n", (a + b));
	}
	
	return 0;
}