#include <stdio.h>

int main() {
	int i;
	for (i=1; i<=30000; i++) {
		if (i%2==1 && i%3==0 && i%7==0) {
			printf("%d\n",i);
		}
	}
	return 0;
}