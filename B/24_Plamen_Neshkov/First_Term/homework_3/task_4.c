#include <stdio.h>

int main() {
	int num=10,i;
	for (i=num; i>1; i--) {
		num=num*(i-1);
	}
	printf("%d",num);
	return 0;
}