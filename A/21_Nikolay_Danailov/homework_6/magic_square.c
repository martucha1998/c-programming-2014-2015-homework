#include <stdio.h>

#define MAX_SIZE 1000

int sum = 0;

void InitializeSquare(int square[MAX_SIZE][MAX_SIZE], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		int j;
		for (j = 0; j < size; ++j)
		{
			scanf("%d", &square[i][j]);
		}
	}
}

int AreRowsMagical(int square[MAX_SIZE][MAX_SIZE], int size)
{
	int currentSum = 0;

	int i;
	for (i = 0; i < size; ++i)
	{
		currentSum = 0;

		int j;
		for (j = 0; j < size; ++j)
		{
			currentSum += square[i][j];
		}

		if (i == 0)
		{
			sum = currentSum;
		}
		else if (currentSum != sum)
		{
			return 0;
		}
	}

	return 1;
}

int AreColumnsMagical(int square[MAX_SIZE][MAX_SIZE], int size)
{
	int currentSum = 0;

	int j;
	for (j = 0; j < size; ++j)
	{
		currentSum = 0;

		int i;
		for (i = 0; i < size; ++i)
		{
			currentSum += square[i][j];
		}

		if (currentSum != sum)
		{
			return 0;
		}
	}

	return 1;
}

int AreDiagonalsMagical(int square[MAX_SIZE][MAX_SIZE], int size)
{
	int currentSum = 0;

	//Top left to down right
	int i;
	for (i = 0; i < size; ++i)
	{
		currentSum += square[i][i];
	}

	if (currentSum != sum)
	{
		return 0;
	}

	//Down left to top right
	for (i = 0; i < size; ++i)
	{
		currentSum += square[size - i - 1][i];
	}

	if (currentSum != sum)
	{
		return 0;
	}

	return 1;
}

int IsSquareMagical(int square[MAX_SIZE][MAX_SIZE], int size)
{
	if (!AreRowsMagical(square, size) || !AreColumnsMagical(square, size) || !AreDiagonalsMagical(square, size))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int square[MAX_SIZE][MAX_SIZE];
	int size;
	scanf("%d", &size);
	InitializeSquare(square, size);

	if(IsSquareMagical(square, size))
	{
		printf("MAGIC");
	}
	else
	{
		printf("NO MAGIC");
	}
	
	return 0;
}