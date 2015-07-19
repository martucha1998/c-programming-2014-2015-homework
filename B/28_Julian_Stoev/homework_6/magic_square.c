#include <stdio.h>
#define OFFSET_MAX 999
void is_the_square_magic(int msquare[OFFSET_MAX][OFFSET_MAX], int size){
	int rows, colums, checkvar, sum1, sum, counter;
	sum1=0;sum=0; checkvar=0;
	for (colums=0; colums<size; colums++){
		sum1=msquare[0][colums]+sum1;
	}	
	for (rows=0; rows<size; rows++){
		for (colums=0; colums<size; colums++){
			sum=msquare[rows][colums]+sum;
		}
		if (sum1!=sum) { checkvar=1; }
		sum=0;
	}
	for (colums=0; colums<size; colums++){
		for (rows=0; rows<size; rows++){
			sum=msquare[rows][colums]+sum;
		}
		if (sum1!=sum) { checkvar=1; }
		sum=0;
	}
	for (counter=0; counter<size; counter++){
		sum=msquare[counter][counter]+sum;
	}
	if (sum1!=sum) { checkvar=1; }
	sum=0;
	int size1=size;
	for (counter=0; counter<size; size++){
		size1--;
		sum=msquare[counter][size1]+sum;
	}
	if (sum1!=sum) { checkvar=1; }
	if (checkvar==0) { printf("Magic"); }
	else { printf("Not Magic"); }
}
int main() {
	int square[OFFSET_MAX][OFFSET_MAX];
	int size, counter_rows, counter_colums;
	printf("Square size:\n");	
	scanf("%d", &size);
	for (counter_rows=0; counter_rows<size; counter_rows++){
		for (counter_colums=0; counter_colums<size; counter_colums++){
			printf("Input for %d row %d colum:\n", counter_rows+1, counter_colums+1);			
			scanf("%d", &square[counter_rows][counter_colums]);
		}
	}
	for (counter_rows=0; counter_rows<size; counter_rows++){
		for (counter_colums=0; counter_colums<size; counter_colums++){
			printf("%d", square[counter_rows][counter_colums]);
		}
	printf("\n");
	}
	printf("\n");
	is_the_square_magic(square, size);
	return 0;
}
