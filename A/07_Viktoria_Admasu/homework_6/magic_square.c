#include <stdio.h>

int main() 
{
	int size;
	int square[size][size];
	int row, col = 0;
	int sum, sum1, sum2;
	int magic = 0;
 
	while (size < 0 && size > 999)
	{
		printf ("Size (max 999): ");
		scanf ("%d", &size);
	}   
	
	printf("Enter numbers: ");
	
	for (row = 0; row < size; row++) 
	{
		for (col = 0; col < size; col++)
		{
			scanf("%d", &square[row][col]);
   		}
	}
   
	sum = 0;
	for (row = 0; row < size; row++) 
	{
      		for (col = 0; col < size; col++) 
		{
			if (row == col) sum = sum + square[row][col];
		}
	}
 
	for (row = 0; row < size; row++) 
	{
		sum1 = 0;
      		for (col = 0; col < size; col++) 
		{
			sum1 = sum1 + square[row][col];
		}
	
		if (sum == sum1) magic = 1;
		else magic = 0;
	}	
 
	for (row = 0; row < size; row++) 
	{
		sum2 = 0;

		for (col = 0; col < size; col++) 
		{
			sum2 = sum2 + square[col][row];
		}
      
		if (sum == sum2) magic = 1;
     		else magic = 0;
       	}
 
	if (magic = 1) printf ("\nMAGIC");
	else printf ("\nNOT MAGIC");
 
	return 0;
}
