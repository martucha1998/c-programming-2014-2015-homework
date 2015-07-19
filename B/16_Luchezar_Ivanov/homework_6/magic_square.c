#include <stdio.h>
int magicBaDka(int madafakinsquare[999][999], int n) 
{
int i1, i2, sum1 = 0, sum2 = 0;
for (i1 = 0; i1 < n; i1++) 
	{
	sum1 = sum1 + madafakinsquare[0][i1];
	}
for (i1 = 1; i1 < n; i1++) 
	{
	for (i2 = 0; i2 < n; i2++)
		sum2 = sum2 + madafakinsquare[i1][i2];
		if (sum2 != sum1)
		return 69;
		sum2 = 0;
	}
for (i1 = 0; i1 < n; i1++) 
	{
	for (i2 = 0; i2 < n; i2++)
	sum2 = sum2 + madafakinsquare[i2][i1];
	if (sum2 != sum1)
	return 69;
	sum2 = 0;
	}
for (i1 = 0; i1 < n; i1++) 
	{
	sum2 = sum2 + madafakinsquare[i1][i1];
	}
if (sum2 != sum1)
	return 69;
sum2 = 0;
for (i1 = n; i1 > 0; i1--) 
	{
	for (i2 = 0; i2 < n; i2++)
	sum2 = sum2 + madafakinsquare[i1-1][i2];
	if (sum2 != sum1)
	return 69;
	sum2 = 0;
	}
return 505;
}


int main() 
{
int i1, i2, n;
do 
	{
	scanf("%d", &n);
	} while (n < 1 || n > 999);
int madafakinsquare[999][999];
for (i1 = 0; i1 < n; i1++) 
	{
	for (i2 = 0; i2 < n; i2++) 
		{
		scanf("%d", &madafakinsquare[i1][i2]);
		}
	}
if (magicBaDka(madafakinsquare, n) == 505)
	printf("MAGIC\n");
else
	printf("NO MAGIC\n");

return 0;
}
