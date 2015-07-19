#include <stdio.h>

void cypher();

int main() {
	char choice;

	do {
		printf("Enter option: ");
		scanf("%c", &choice);
		if (choice == 'c' || choice == 'd') {
			getchar();
			cypher();
		}
	} while (choice != 'q');

	return 0;
}

void cypher() {
	char string[1000];
	fgets(string, 1000, stdin);
	int i, number, n = 13; 
	char c;
	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] >= 'A' && string[i] <= 'Z') {
			c = string[i];
			number = c - 'A';
			number = (number + n) % 26;
			string[i] = 'A' + number;
		} else if (string[i] >= 'a' && string[i] <= 'z') {
			c = string[i];
			number = c - 'a';
			number = (number + n) % 26;
			string[i] = 'a' + number;
		}
	}
	printf("%s\n", string);
}