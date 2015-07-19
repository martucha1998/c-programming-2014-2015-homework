#include<stdio.h>
void magic(int n)
{
	int i,k,b,j,l;
	int m[999][999];
	int m1[999];
	for(i=0;i<n;i++)
	{
		printf("Vavedi %d red: \n", i+1);
		for(k=0;k<n;k++)
		{	
			scanf(" %d", &m[i][k]);
		}
	}
	b=(n*(n*n+1))/2;
	m1[n+n]=0;
	m1[n+n+1]=0;
	for(i=0;i<n;i++)
	{
		m1[i]=0;
		m1[i+n]=0;
		for(k=0;k<n;k++)
		{
			m1[i]=m1[i]+m[i][k];
			m1[i+n]=m1[i+n]+m[k][i];
			if(k==i)
			{
				m1[n+n]=m1[n+n]+m[i][k];
			}
		}
		
	}
	k=0;
	for(i=n-1;i<=0;i--)
	{
		m1[n+n+1]=m1[n+n+1]+m[i][k];
		k++;
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(m1[i]==b)
		k++;
		else
		{
		printf("NO MAGIC\n");
		break;
		}
	}
	if(k==n)
	printf("MAGIC\n");
}
int main()
{
	int a;
	printf("Vavedi golemina na kvadrata: \n");
	scanf("%d", &a);
	magic(a);
	return 0;
}
