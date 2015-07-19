#include <stdio.h>

int main()
{
	int count;
	int m,n;
	int rng;
	int lngth;
	int array[rng];
	int i=0;
	
	printf("enter range: ");
	scanf("%d",&rng);
	printf("enter length: ");
	scanf("%d",&lngth);
	printf("enter array: ");
	while (i<lngth)
	{
		scanf("%d", &array[i]);
  		i++;
  	}
	printf("\n");
	printf("histogram: ");
	printf("\n");
	for (i = 0; i <= rng; ++i)
	{
		printf("%d: ",i);
		count=0;
		for (m=0;m<lngth;m++)
		{
			if (array[m]==i)
			{
				count++;
			}
		}
		for (n=0;n<count;n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
