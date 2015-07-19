#include <stdio.h>

int main (){
int range, length, count, i;
	printf("Enter range: ");
	scanf("%d", &range);
	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter array: ");
	if(length > 1000){
		printf("Max length 1000.\n");
		return 0;
	}
	int numbers[1000];	
	for(count = 0; count < length; count++){	
		scanf("%d ",&numbers[count]);
	}
	int counts[1000];
	for (count = 0; count < length; ++count)
	{
		if (numbers[count] >= 0 && numbers[count] <= range)
		{
			counts[numbers[count]]++;
		}
	}
	printf("Histogram:\n");
	for(count = 0; count <= range; ++count){
		printf("%d: ",count);
		for(i = 0; i < counts[count]; ++i){
			printf("*");
		}
		printf("\n");
	}
return 0;
}

