#include <stdio.h>

int main() {
	char arr[1000][20];
	char new_arr[1000][20];
	char result[1000][20];

	int n;
	int cnt = 0;
	
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			char c[20] = {0};
			scanf("%s", c);

			for (int j = 0; j < sizeof(c); j++) {
				arr[i][j] = c[j];
				if (c[j] >= 'a' && c[j] <= 'z') {
					c[j] = c[j] - 'a' + 'A';
				}
			}
			for (int j = 0; j < sizeof(c); j++) {
				new_arr[i][j] = c[j];
			}
		}
		int minindex = 0;

		for (int i = 0; i < n; i++) {
			int ans = 0;
			ans = strcmp(new_arr[minindex], new_arr[i]);
			if (ans > 0) {
				minindex = i;
			}
		}
		printf("%s", arr[minindex]);
		printf("\n");
	}
	return 0;
}