#include<stdio.h>
void magic_square(int a)
{
	 int i,b,c;
	 int ar[999][999];
	 int ar1[999];
	 for(i = 0;i < a;i++)
	 {
	 	printf("Enter %d line: ", i + 1);
	 	for(b = 0;b < a;b++)
	 	{
	 		scanf(" %d", &ar[i][b]);
	 	}
	 }
	 c=(a*(a*a +1))/2;
	 ar1[a+a]=0;
	 ar1[a+a+1]=0;
	 for(i = 0;i < a;i++)
	 {
	 	ar1[i]=0;
	 	ar1[i+a]=0;
	 	for(b = 0;b < a;b++)
	 	{
	 		ar1[i]=ar1[i]+ar[i][b];
	 		ar1[i+a]=ar1[i+a]+ar[b][i];
	 		if(b == i)
	 		{
	 			ar1[a+a]=ar1[a+a]+ar[i][a];
	 		}
	 	}

	 }
	 b = 0;
	 for(i = a-1;i <= 0;i--)
	 {
	 	ar1[a+a+1]=ar1[a+a+1]+ar[i][b];
	 	b++;
	 }
	 b = 0;
	 for(i = 0;i < a;i++)
	 {
	 	if(ar1[i] == c)
	 	b++;
	 	else
	 	{
	 		printf("NO MAGIC\n");
	 		break;
	 	}
	 }
	 if(b == a)
	 printf("MAGIC\n");
	}
int main()
{
	int n;
	printf("Enter the lenght of the square: ");
	scanf("%d", &n);
	magic_square(n);
	return 0;
}