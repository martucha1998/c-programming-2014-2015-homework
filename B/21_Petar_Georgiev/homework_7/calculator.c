#include <stdio.h>

int funct(char function, int num1, int num2);
int main(){
	char function;
	int num1, num2, result;

	printf("Input numbers \n");
	scanf("%d %d", &num1, &num2);
	printf("input mathematical fuction \n");
	scanf("%s", &function);

	result=funct(function, num1, num2);
	printf("Rezultata e %d", result);
	return 0;
	int funct(char function, int num1, int num2){
		int result;
	}
	switch(function){
		case '+': result = num1 + num2;break;
		case '-': result = num1 - num2;break;
		case '*': result = num1 * num2;break;
		case '/': result = num1 / num2;break;
	}
	return result;
}
