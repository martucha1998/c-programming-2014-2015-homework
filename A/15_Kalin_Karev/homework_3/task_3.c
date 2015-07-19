#include <stdio.h>
int main1(int num)
{
	int i = 1;
	while (i<=num)
	{
		if (num%i==0)
		{
			if (!((i==1) || (i==num)))
			{
				return 0;
			}
		}
		i++;
	}
		return 1;
}
int main()
{
	int c1 = 3;
	int c2 = 5;
	int i;
	int tdoub = 1;
	while (tdoub<=10)
	{
		if ((main1(c1)==1) && (main1(c2)==1) && (c2 -c1 == 2))
		{
			printf ("(%d, %d)\n", c1, c2);
			tdoub++;
		}
		c1++;
		c2++;
	}
	return 0;
}

