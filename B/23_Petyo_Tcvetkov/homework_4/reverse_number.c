#include <stdio.h>

int main()
{
	int num1=5170984,num2=406567,num3=368750,num4=2369510,num5=2183293,i=0,res=0;
	printf("%d - ",num1);
	
	while(num1!=0){
	res=res*10 + num1%10;
	num1=num1/10;	
	}
	printf("%d\n",res);
	res=0;
	printf("%d - ",num2);
	while(num2!=0){
	res=res*10 + num2%10;
	num2=num2/10;	
	}
	printf("%d\n",res);
	res=0;
	printf("%d - ",num3);
	while(num3!=0){
	res=res*10 + num3%10;
	num3=num3/10;	
	}
	printf("%d\n",res);
	res=0;
	printf("%d - ",num4);
	while(num4!=0){
	res=res*10 + num4%10;
	num4=num4/10;	
	}
	printf("%d\n",res);
	res=0;
	printf("%d - ",num5);
	while(num5!=0){
	res=res*10 + num5%10;
	num5=num5/10;	
	}
	printf("%d\n",res);
	

	


	return 0;
}