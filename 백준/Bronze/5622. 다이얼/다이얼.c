#include <stdio.h>
#include <string.h>
int time(char c) {
	switch (c) {
	case 'A':
	case 'B':
	case 'C':
		return 3;
	case 'D':
	case 'E':
	case 'F':
		return 4;
	case 'G':
	case 'H':
	case 'I':
		return 5;
	case 'J':
	case 'K':
	case 'L':
		return 6;
	case 'M':
	case 'N':
	case 'O':
		return 7;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return 8;
	case 'T':
	case 'U':
	case 'V':
		return 9;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		return 10;
	}
}
int main() {
	char word[15];
	int t = 0;
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		t += time(word[i]);
 	}
	printf("%d\n", t);
	return 0;
}