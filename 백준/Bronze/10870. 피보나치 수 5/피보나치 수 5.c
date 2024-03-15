#include <stdio.h>
int fac(int n) {

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else {
		return fac(n - 1) + fac(n - 2);
	}
}
int main() {
	int n;
	int result;

	scanf("%d", &n);
	result = fac(n);

	printf("%d\n", result);

	return 0;
}