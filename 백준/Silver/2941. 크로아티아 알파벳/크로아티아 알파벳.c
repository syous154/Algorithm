#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int count = 0;
	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '=' || word[i + 1] == '-') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				count++;
				i++;
				i++;
			}
			else if (word[i + 1] == '-') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (word[i] == 'l') {
			if (word[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (word[i] == 'n') {
			if (word[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			count++;
			i++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			count++;
			i++;
		}
		else {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}