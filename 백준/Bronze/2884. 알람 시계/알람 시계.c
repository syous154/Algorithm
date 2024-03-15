#include <stdio.h>

int main() {
	int h, m;
	int a;
	scanf("%d %d", &h, &m);

	if (m < 45) {
		if(h == 0) {
			h = 23;
			a = 45 - m;
			m = 60 - a;
			printf("%d %d", h, m);
		}
		else {
			h--;
			a = 45 - m;
			m = 60 - a;
			printf("%d %d", h, m);
		}
	}
	else {
		m = m - 45;
		printf("%d %d", h, m);
	}

	return 0;
}
