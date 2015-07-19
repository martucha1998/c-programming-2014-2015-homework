#include <stdio.h>

int main()
{
	int range;
	printf("Enter range: ");
	scanf("%d", &range);

	int numbersCount;
	printf("Enter length: ");
	scanf("%d", &numbersCount);

	int numbers[1000];
	printf("Enter array: ");

	int i;
	for (i = 0; i < numbersCount; ++i)
	{
		scanf("%d", &numbers[i]);
	}

	int numbersCounter[1000];

	for (i = 0; i < numbersCount; ++i)
	{
		if (numbers[i] >= 0 && numbers[i] <= range)
		{
			numbersCounter[numbers[i]]++;
		}
	}

	printf("Histogram\n");

	for (i = 0; i <= range; ++i)
	{
		printf("%d", i);

		int j;
		for (j = 0; j < numbersCounter[i]; ++j)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}