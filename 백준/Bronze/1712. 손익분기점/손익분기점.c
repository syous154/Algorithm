#include <stdio.h>

int main() {
	int A, B, C;
    int X = 1;

    scanf("%d %d %d", &A, &B, &C);

    if (B >= C)
    {
        printf("-1");
        return 0;
    }
    X = A / (C - B) + 1;

    printf("%d", X);
	
	return 0;
}