#include<stdio.h>
#include <float.h>

int main()
{
	int n,j;
	int i=1;
	int mas=1;
	float polojenie[2];
	float nacepin [2];
	printf ("vuvedete broi bidoni s nacepin\n");
	scanf ("%d", &n);
	printf("na4alni koordinati na pacman\n");
	scanf("%f", &polojenie[j]);
	do
		{		
		printf("koordinati na %dbidon s nacepin", i);
		scanf("%f", &nacepin[i]);
		polojenie[0]=nacepin[0];
		polojenie[1]=nacepin[1];
		polojenie[0]=polojenie[0]/mas;
		polojenie[1]=polojenie[1]/mas;
		mas++;
		i++;
		}
	while(i<=n);
	for(j=0;j<2;j++)
	{	
	printf("\nkraini koordinati na pacman %f:", polojenie[j]);
	}
return 0;
