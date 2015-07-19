#include <stdio.h>
int main()
{
	int a,b,range,length;
	
	printf("Enter range: ");
	scanf("%d", &range);
	printf("Enter length: ");
	scanf("%d", &length);

	int array[length];

	printf("Enter array: ");

	for(a = 0; a < length; a++)
	{
		scanf("%d", &array[a]);
	}	

	printf("Histogram:\n");

	for(a = 0; a <= range; a++)
	{
		printf("%d: ",a);
		for(b = 0; b < length; b++)
		{
			if (array[b] == a) printf("*");
		}

	printf("\n");
	}

	return 0;
}

