#include <stdio.h>

int main(){

	int range;
	printf("Enter range: ");
	scanf("%d", &range);

	int length;
	printf("Enter length: ");
	scanf("%d", &length);

	int masiv[length];
	printf("Enter array: ");
	int i;
	for(i=0;i<length;i++)
		if(scanf("%d", &masiv[i]) != 1)
			i--;

	printf("Histogram: \n");

	for(i=0; i<=range;i++){
		int j;
		printf("%d: ", i);
			for(j=0;j<length;j++){
				if(masiv[j] == i)
					printf("*");
			}
		printf("\n");
	}
	return 0;
}