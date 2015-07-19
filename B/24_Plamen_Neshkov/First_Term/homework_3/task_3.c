#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	int i=2;
	bool flag=true;
	do {
		if (n%i==0)
			flag=false;
		i++;
	} while (flag==true && i<=n-1);
	return flag;
}

int main() {
	int i=0;
	int ii=3;
	do {
		if (isPrime(ii)) {
			printf("(%d, %d)\n",ii,ii+2);
			i++;
		}
		ii++;
	} while (i<10);
	return 0;
}