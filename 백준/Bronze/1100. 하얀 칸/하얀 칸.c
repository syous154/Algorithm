#include <stdio.h>

int main() {
	char board[8][9];
	int count = 0;

	for (int i = 0; i < 8; i++) {
		gets(board[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char f = board[i][j];
			if (i % 2 == 0 && j % 2 == 0 && f=='F'){
				count++;
			}
			else if (i % 2 == 1 && j % 2 == 1 && f=='F') {
				count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}
