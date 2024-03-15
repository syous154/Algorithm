#include <stdio.h>

int main() {
	int num[9];
	int max = 0;
	int k;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			k = i;
		}
	}
	printf("%d\n%d", max, k+1);
	
	return 0;
}