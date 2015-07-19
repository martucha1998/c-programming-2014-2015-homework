#include<stdio.h>

void rot13() {
	int i;
	char string[100];
	scanf("%s", string);
	getchar();
	for (i = 0; string[i] != '\0'; i++) {
		if ('z' - string[i] >= 13) {
			string[i] = string[i] + 13;
		}
		else{
			string[i] = string[i] - 13;
		}
	}
	printf("%s\n", string);
}

int main() {
	char option;
	while (option != 'q'){
		printf("Enter option: ");
		scanf("%c", &option);
		if (option == 'c' || option == 'd') {
			rot13();
		}
	}
	return 0;
}
