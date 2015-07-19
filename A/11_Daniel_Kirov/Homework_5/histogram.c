#include <stdio.h>
int main ()
{

int range;
int length;
int i, c;

//i - range counter
//c - length counter

	printf("Input range\n");
	scanf("%d", &range);
	printf("Input length\n");
	scanf("%d", &length);

int array[length];
	for(c = 0; c < length, c++)
	{
		printf("Input number\n");
		scanf("%d", &array[c]);
	}
	for(i = 0, i < length, i++)
	{
	printf("%d", i);
	for(c = 0, c < length; c++)
	{
		if(i == array[c])
		{
			printf("*");
		}
	}
	printf("\n);
	}
return 0;
}
