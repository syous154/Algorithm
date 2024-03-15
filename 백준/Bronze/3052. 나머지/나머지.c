#include <stdio.h>

int main() {
	int num;
	int n = 42;
	int nmz[10] = { 0 };
	int result = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		nmz[i] = num % 42;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (nmz[i] == nmz[j])
				count++;
		}
		if (count == 0) result++;
	}
	printf("%d", result);
	return 0;
}