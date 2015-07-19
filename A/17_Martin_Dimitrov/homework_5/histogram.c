#include <stdio.h>

int main(){
	int range, count, i, j;
	int numbers[1000];
	int counter[1000];
	printf("Enter range: ");
	scanf("%d", &range);
	printf("Enter length: ");
	scanf("%d", &count);
	printf("Enter array: ");
	for (i = 0; i < count; i++){
		scanf("%d", &numbers[i]);
	}
	for (i = 0; i < count; ++i){
		if (numbers[i] >= 0 && numbers[i] <= range){
		counter[numbers[i]]++;
		}
	}
	printf("Histogram\n");
	for (i = 0; i <= range; i++){
		printf("%d", i);
		for (j = 0; j < counter[i]; ++j){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}