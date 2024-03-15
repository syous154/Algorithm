#include <stdio.h>
int factorial(int n) {
	int fac;
	if (n == 1) {
		return 1;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		fac = factorial(n - 1) * n;
	}
	return fac;
}
int main() {
	int num;
	int result;
	scanf("%d", &num);

	result = factorial(num);

	printf("%d", result);

	return 0;
}