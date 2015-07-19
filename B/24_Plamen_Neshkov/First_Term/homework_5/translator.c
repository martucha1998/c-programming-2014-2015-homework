#include <stdio.h>
#include <string.h>

int main() {
	char string[1000] = "xrrJfvuGrgveJhbLqvQfznetbeClanZjbU";
	
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
	
	i=0;
	int temp, j = strlen(string) - 1;
	while(i < j) {
		temp = string[i];
		string[i++] = string[j];
		string[j--] = temp;
	}

	printf("%s\n", string);

	return 0;
}