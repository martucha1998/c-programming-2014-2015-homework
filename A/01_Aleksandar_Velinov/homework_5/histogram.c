#include <stdio.h>

int main() {
	int range, length, array[length], i, q;
	printf("Enter range: \n");
	scanf("%d", &range);
	printf("Enter length: \n");
	scanf("%d", &length);
	printf("Enter array: \n");
	scanf("%d", array);
	for(i=0;i<range;i++){
		printf("\n%d: ", i);
		for(q=0;q<length;q++){
			if( array[q] == i )
			printf("*");
		}
	}
	return 0;
}
