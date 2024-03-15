#include <stdio.h>
#include <string.h>

int main() {
	char word[1000000];
	int count = 0;

	scanf("%[^\n]", word);
	if (strlen(word) == 1) {
		if (word[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}
	for (int i = 1; i < strlen(word)-1; i++) {
		if (word[i] == ' ')
			count++;
	}
	printf("%d", count+1);

	return 0;
}