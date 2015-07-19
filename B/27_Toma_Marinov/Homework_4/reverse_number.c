#include <stdio.h>

int main()
{
	int long unsigned x[5] = {5170984, 406567, 368750, 2369510, 2183293};
	int long unsigned y = 0;
	int z;
	printf("\n");
	for (z = 0; z < 5; z++)
	{
		while (x[z] != 0)
		{
			y = y * 10 + x[z]%10;
			x[z] = x[z]/10;
		}
		printf("%lu \n", y);
		y = 0;
	}
	return 0;
}
