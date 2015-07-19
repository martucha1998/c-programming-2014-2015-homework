#include <stdio.h>

int main() {
	int range,length, i, ii;

	printf("Enter range: ");
	do {
		scanf("%d", &range);
	} while (range < 1 || range > 32767);
	printf("Enter length: ");
	do {
		scanf("%d", &length);
	} while (length < 1 || range > 32767);

	int array[length];

	printf("Enter array: ");
	for (i=0; i<length; i++) {
		do {
			scanf("%d", &array[i]);
		} while (array[i] < 0 || array[i] > range);
	}

	printf("Histogram:");
	for (i=0; i<=range; i++) {
		printf("\n%d: ", i);
		for (ii=0; ii<length; ii++) {
			if (array[ii]==i) {
				printf("*");	
			}
		}
	}
	printf("\n");

	return 0;
}