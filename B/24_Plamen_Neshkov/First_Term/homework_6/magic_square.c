#include <stdio.h>

int isitmagic(int square[999][999], int size) {
	int i, ii, sum = 0, sum2 = 0;
	
	for (i = 0; i < size; i++) {
		sum += square[0][i];
	}
	
	for (i = 1; i < size; i++) {
		for (ii = 0; ii < size; ii++)
			sum2 += square[i][ii];
		if (sum2 != sum)
				return 0;
		sum2 = 0;
	}
	
	for (i = 0; i < size; i++) {
		for (ii = 0; ii < size; ii++)
			sum2 += square[ii][i];
		if (sum2 != sum)
			return 0;
		sum2 = 0;
	}

	for (i = 0; i < size; i++) {
		sum2 += square[i][i];
	}
	if (sum2 != sum)
		return 0;
	sum2 = 0;

	for (i = size; i > 0; i--) {
		for (ii = 0; ii < size; ii++)
			sum2 += square[i-1][ii];
		if (sum2 != sum)
				return 0;
		sum2 = 0;
	}	

	return 1;
}

int main() {
	int i, ii, size;

	do {
		scanf("%d", &size);
	} while (size < 3 || size > 999);

	int square[999][999];
	for (i = 0; i < size; i++) {
		for (ii = 0; ii < size; ii++) {
			scanf("%d", &square[i][ii]);	
		}
	}
	
	if (isitmagic(square, size) == 0)
		printf("NO MAGIC\n");
	else
		printf("MAGIC\n");

	return 0;
}