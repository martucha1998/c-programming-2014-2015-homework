#include <stdio.h>
int main()
{
int length,range,i,j;
printf("Enter range: ");
scanf("%d",&range);
printf("Enter length: ");
scanf("%d",&length);
int array[length];
printf("Enter array: ");
for(i=0;i<length;i++)
	{
	scanf("%d",&array[i]);
	}
printf("histogram:\n");
for(i=0;i<=range;i++)
	{
	printf("%d: ",i);
	for(j=0;j<length;j++)
		{
		if(array[j]==i)
			printf("*");
		}
	printf("\n");
	}
return 0;
}
