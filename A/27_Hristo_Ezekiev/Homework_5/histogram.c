#include<stdio.h>

int main()
{
	
	int l;
	int n;
	printf("Input the lenght\n");
	scanf("%d", &l);
	printf("input the range\n");
	scanf("%d", &n);
	int i = 0;
	int num;
	int array[100];
	for(i = 0;i < l;i++)
	{
		printf("input a number\n");
		scanf("%d", &array[i]);
		
	}
	int b;
	for(b=0;b<=n;b++)
	{
		printf("%d:", b);
		for(i=0;i<=l-1;i++)
		{
			if (b == array[i])		
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
	return 0;
	
}
