#include <stdio.h>

#define MAXSIZE 1000

int sum = 0;

void MakeASquare(int square[MAXSIZE][MAXSIZE], int size)
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

int IfRowsMagic(int square[MAXSIZE][MAXSIZE], int size)
{
	int tempSum = 0;
	int i;
	for (i = 0; i < size; ++i)
	{
		tempSum = 0;
		int j;
		for (j = 0; j < size; ++j)
		{
			tempSum += square[i][j];
		}
		if (i == 0)
		{
			sum = tempSum;
		}
		else if (tempSum != sum)
		{
			return 0;
		}
	}
	return 1;
}

int IfColumsMagic(int square[MAXSIZE][MAXSIZE], int size)
{
	int tempSum = 0;
	int i;
	for (i = 0; i < size; ++i)
	{
		tempSum = 0;
		int j;
		for (j = 0; i < size; ++j)
		{
			tempSum += square[j][i];
		}
		if (tempSum != sum)
		{
			return 0;
		}
	}
	return 1;
}

int IfDiagMagic(int square[MAXSIZE][MAXSIZE], int size)
{
	int tempSum = 0;
	int i;
	for (i = 0; i < size; ++i)
	{
		tempSum += square[i][i];
	}
	if (tempSum != sum)
	{
		return 0;
	}
	for (i = 0; i < size; ++i)
	{
		tempSum += square[size - i - 1][i];
	}
	if (tempSum != sum)
	{
		return 0;
	}
	return 1;
}

int IfSqrMagic(int square[MAXSIZE][MAXSIZE], int size)
{
	if (!IfRowsMagic(square, size) || !IfColumsMagic(square, size) || !IfDiagMagic(square, size))
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
	int square[MAXSIZE][MAXSIZE];
	int size;
	scanf("%d", &size);
	MakeASquare(square, size);
	if(IfSqrMagic(square, size))
	{
		printf("MAGIC\n");
	}
	else
	{
		printf("NO MAGIC\n");
	}
	return 0;
}
