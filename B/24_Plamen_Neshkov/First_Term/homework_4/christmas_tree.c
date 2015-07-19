#include <stdio.h>

int main() {
	char asterisk = '*';
	int i, ii, height, start = 1, end = 1;

	height = 4;
	for (i = 1; i <= height; i++) {
		for (ii = 1; ii <= height-i; ii++) {
			printf(" ");
		}
		for (start = 1; start <= end; start++) {
			printf("%c", asterisk);
		}
		end += 2;
		printf("\n");
	}
	
	end = 1;
	
	height = 7;
	for (i = 1; i <= height; i++) {
		for (ii = 1; ii <= height-i; ii++) {
			printf(" ");
		}
		for (start = 1; start <= end; start++) {
			printf("%c", asterisk);
		}
		end += 2;
		printf("\n");
	}
	
	end = 1;

	height = 11;
	for (i = 1; i <= height; i++) {
		for (ii = 1; ii <= height-i; ii++) {
			printf(" ");
		}
		for (start = 1; start <= end; start++) {
			printf("%c", asterisk);
		}
		end += 2;
		printf("\n");
	}

	return 0;
}