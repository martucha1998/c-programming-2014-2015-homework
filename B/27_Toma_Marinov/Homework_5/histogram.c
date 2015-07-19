#include <stdio.h>

int main()
{
	int ar[1000];
	int rng, lth, n, i, m, x;
	printf("Enter range: ");
	scanf("%d", &rng);
	printf("Enter length: ");
	scanf("%d", &lth);
	printf("Enter array: \n");
	for (i = 0; i<lth; i++)
		if(scanf("%d", &ar[i]) != 1)
		i--;
	
	printf("Histogram: \n");
	for (i = 0; i<rng; i++)
	{
		printf("%d : ", i);
		for (x = 0; x<lth; x++)
		{
			if (ar[x] == i)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
