#include <stdio.h>

	int main()
	{
		int obh, dulj, a, b;
		int ar[dulj];
		printf("Enter range: ");
		scanf("%d", &obh);
		printf("Enter length: ");
		scanf("%d", &dulj);
		printf("Enter array: ");
		scanf("%d", ar);
			for(a=0; a < obh; a++)
			{
				printf("\n%d: ", a);
				for(b=0; b < dulj; b++)
				{
					if( ar[b] == a )
					printf("*");
				}
			}
		return 0;
	}
