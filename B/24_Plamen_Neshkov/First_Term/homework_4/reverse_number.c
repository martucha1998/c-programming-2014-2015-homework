#include <stdio.h>

int main() {
	int num, revNum, rem;

	num=5170984, revNum=0;
	do {
		rem = num % 10;
		revNum = revNum*10 + rem;
		num /= 10;
	} while (num > 0);
	printf("%d\n", revNum);

	num=406567, revNum=0;
	do {
		rem = num % 10;
		revNum = revNum*10 + rem;
		num /= 10;
	} while (num > 0);
	printf("%d\n", revNum);

	num=368750, revNum=0;
	do {
		rem = num % 10;
		revNum = revNum*10 + rem;
		num /= 10;
	} while (num > 0);
	printf("%d\n", revNum);

	num=2369510, revNum=0;
	do {
		rem = num % 10;
		revNum = revNum*10 + rem;
		num /= 10;
	} while (num > 0);
	printf("%d\n", revNum);

	num=2183293, revNum=0;
	do {
		rem = num % 10;
		revNum = revNum*10 + rem;
		num /= 10;
	} while (num > 0);
	printf("%d\n", revNum);

	return 0;
}