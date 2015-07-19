#include <stdio.h>

int ct(int t)
{
	int n;
	int x = 1;
	while (t > 0)
	{
		for (n = 0; n < t; n++)
		printf(" ");
		for (n = 0; n < x; n++)
		printf("*");
		x = x + 2;
		t = t - 1;
		printf("\n");
	}
}

int main()
{
	ct(4);
	ct(7);
	ct(11);
	return 0;
}
