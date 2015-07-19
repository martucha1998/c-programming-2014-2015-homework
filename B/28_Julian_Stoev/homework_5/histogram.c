#include <stdio.h>

int main () {
	int range, length, i, count;
	printf("Enter range: ");
	scanf("%d", &range);
	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter array: ");
	int arr[length];
	for (i=0; i<length; ++i) {
		scanf("%d", &arr[i]);
		printf("\r ");}
	printf("Histogram: \n");
	for (i=0; i<=range; i++) {
		printf("%d: ", i);
		for (count=0; count<length; count++) {
			if (arr[count]==i) {
				printf("*");}}
	printf("\n");}	
	return 0;
}
