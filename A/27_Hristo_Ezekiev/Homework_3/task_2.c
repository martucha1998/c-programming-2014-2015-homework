#include<stdio.h>
int main(){
	int n
	long l1=2,l2=1,l=0;

	printf("%li, %li, ",l1,l2);
	for(n = 0; n < 100; n++)
	{
		l = l1 + l2;
		l1 = l2;
		l2 = l;
		printf("%li, ",l2);
	}
	printf("\n"0;
	return 0;
}
