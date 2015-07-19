#include <stdio.h>

int main()
{
	int i,i1,i2,b1, b2,b3,c,a1,a2,a3,p;
	i=7;
	i1=4;
	i2=11;

	 b1=b2=b3=0;
	 a1=a2=a3=1;
	while(b1<4){
		for (c=i1;c>0;c--){
		printf(" ");		
		};
		for(p=0;p<a1;p++){
			printf("*");		
		
		};
		printf("\n");
		i1--;
		b1++;
		a1=a1+2;


	};
	while(b2<7){
		
		for (c=i;c>0;c--){
		printf(" ");		
		};
		for(p=0;p<a2;p++){
			printf("*");		
		
		};
		printf("\n");
		i--;
		b2++;
		a2=a2+2;


	};
	while(b3<11){
		for (c=i2;c>0;c--){
		printf(" ");		
		};
		for(p=0;p<a3;p++){
			printf("*");		
		
		};
		printf("\n");
		i2--;
		b3++;
		a3=a3+2;


	};
return 0;
}