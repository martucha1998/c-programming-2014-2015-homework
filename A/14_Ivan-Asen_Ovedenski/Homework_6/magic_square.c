#include <stdio.h>

int size; 
int n ;

int magic_square(int square[100][100])
{
	int cols,rows;
	int magic = 0; 
	//Redove
	for (rows = 0;rows < size;rows++)
	{
		for (cols = 0;cols < size;cols++)
		{
			magic = magic + square[rows][cols];
		}
		if (magic != n) 
		{
			return 0;
		} else {magic = 0;}
	}
	//Koloni
	magic = 0;
	for (cols = 0;cols < size;cols++)
	{
		for (rows = 0;rows < size;rows++)
		{
			magic = magic + square[cols][rows];
		}
		if (magic != n) 
		{
			return 0;
		} else {magic = 0;}
	}
	
	//Purvi diagonal
	magic = 0;
	for (cols = 0;cols < size;cols++)
	{ 
		magic = magic + square[cols][cols];
	}	
	if (magic != n) 
		{
			return 0;
		}
	//Vtori diagonal
	int umalitel = 1;
	magic = 0;
	for (rows = size - 1;rows = 0;rows--)
	{
		cols = size - umalitel;
		magic = magic + square[rows][cols];
		umalitel++;
		if (magic != n) 
		{
			return 0;
		}
	}
	return 1;
}

int main () 
{
	int i,counter,magic;
	int square[100][100];
	printf("\nVuvedi broi redove (ne poveche ot 99) : ");
	scanf("%d", &size);
	n = size * size + 1 ;
	n = n * size ;
	n = n / 2;	 
	for (i = 0;i < size;i++)
	{	
		printf("Vuvedi stoinosti na red %d :", i + 1);
		for (counter = 0; counter < size;counter++)
		{
			scanf("%d", &square[i][counter]);
		}
	}
	
	printf("%d\n", magic_square (square));
	
	return 0;
}
