#include<stdio.h>
void histogram(int n)
{
	int i,k,l;
	int m[100000];
	int m1[100000];
	printf("Enter length:  ");
	do{
		scanf("%d", &l);
	}   while (l < 0);

	printf("Enter array: \n");

	for (i = 0; i < l; i++)
	{
		k = i + 1;
		printf("enter %d:", k);
		do{
			scanf("%d", &m[i]);
			if (m[i]<0 || m[i]>n)
			{
			printf("Range is %d !!! \n", n);
			printf("enter %d:", k);
			}
		} while (m[i]<0 || m[i]>n);
	}
	for (i = 0; i <= n; i++)
		m1[i] = 0;
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k < l; k++)
		{
			if (m[k] == i)
				m1[i] = m1[i] + 1;
		}
	}
	for (i = 0; i <= n; i++)
	{
		printf("%d: ", i);
		for (k = 1; k <= m1[i]; k++)
			printf("*");
		printf("\n");
	}
}
int main()
{
	int a;
	printf("Enter range: \n");
	do{
		scanf("%d", &a);
	}	while (a < 0);
	histogram(a);
	return 0;
}
