#include<stdio.h>
int diagonals(int square[999][999],int n,int sum)
{
	int i,diagonalsum1=0,diagonalsum2=0;
	for(i = 0;i < n;i++)
	{
	diagonalsum1=diagonalsum1 + square[i][i];
	}
	for(i = 0;i < n;i++)
	{
	diagonalsum2=diagonalsum2 + square[i][i];
	}
	if(diagonalsum1 == diagonalsum2)
	{
		if(diagonalsum1 == sum)
			return 1;
	}else return 0;

}
int colons(int square[999][999], int n, int sum)
{
	int counter,j=0,i,colonsum=0;
	
	for(i = 1;i < n;i++)
	{
			for(counter = 0;counter < n;counter++)
			{
			colonsum=colonsum + square[counter][i];	
			}
		if(sum != colonsum)
		{
			j=0;
			break;
		}
	}
	if(j==1){
	return 1;
	}else return 0;
}
int Rows(int square[999][999], int n,int firstrowsum)
{
	int counter,j=0,i,sum = 0;
	
	for(i = 1;i < n;i++)
	{
			for(counter = 0;counter < n;counter++)
			{
			sum=sum + square[i][counter];	
			}
		if(sum != firstrowsum)
		{
			j=0;
			break;
		}
	}
	if(j==1){
	return 1;
	}else return 0;
}

int main()
{
	int number,counter,i,firstrowsum;
	scanf("%d", &number);
	int square[999][999];
	for(counter = 0;counter < number; counter++)
	{
		for(i = 0; i < number; i++)
		{
		scanf("%d", &square[counter][i]);
		}
	}

	for(i = 0; i < number; i++)
	{
		firstrowsum=firstrowsum + square[0][i];
	}
	if((Rows(square, number, firstrowsum) == 1) && 
		(colons (square, number, firstrowsum) == 1)  && 
		(diagonals(square,number,firstrowsum) == 1))
	
		printf("MAGIC");
	
	else printf("NOT MAGIC");
}