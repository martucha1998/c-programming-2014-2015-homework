#include<stdio.h>

void rot13() {
	int i;
	char string[] = "xrrJfvuGrgveJhbLqvQfznetbeClanZjbU";
	for (i = 0; string[i] != '\0'; i++) {
		if (('Z' - string[i] >= 13) ||
			(('z' - string[i] > 13) &&
			('z' - string[i] < 26)))
		{
			string[i] = string[i] + 13;
		}
		else
		{
			string[i] = string[i] - 13;
		}
	}
	int size = sizeof(string) / sizeof(string[0]) - 1;
	char result[size];
	for (i = 0; i < size; i++)
	{
		result[i] = string[size - (i + 1)];
	}
	printf("%s\n", result);
	int size2 = sizeof(result) / sizeof(result[0]);
	printf("%d", size);
}

int main() {
	char option;
	rot13();
	return 0;
}
