#include <stdio.h>

void magicSquareOrNot(int n) 
{
	int row,col,i,sumd1=0,sumd2=0;
	int square[n][n];
	int sumrow[n],sumcol[n];
		for (row=0 ; row<n ; row++) {
			for (col=0 ; col<n ; col++) {
				square[row][col] = 0;
				sumrow[col] = 0;
				sumcol[col] = 0;
			}
		}
		for (row=0 ; row<n ; row++) {
			for (col=0 ; col<n ; col++) {
				square[row][col] = 0;
				scanf("%d", &square[row][col]);
			}
		}
		for (row=0 ; row<n ; row++) {
			for (col=0 ; col<n ; col++) {
				sumrow[row] = sumrow[row] + square[row][col];
				sumcol[col] = sumcol[col] + square[col][row];
			}
		}
		for (row=0 ; row<n ; row++) {
			sumd1 += square[row][row];
			sumd2 += square[row][n-row-1];
		}
		i=0;
		if (sumd1 == sumd2) {
			for (row=0 ; row<n ; row++) {
				if ((sumrow[0] == sumrow[row]) && (sumrow[0] == sumd1)) {
					if (sumcol[0] == sumcol[row]) {
						i++;
					}
		
				}
			}
			if (i==n) printf("MAGIC\n");
			else printf("NO MAGIC\n");
		}else printf("NO MAGIC\n");

}

int main () {
	int n;
		do {
			scanf("%d",&n);
		}while ((n<0)&&(n>1000));
	magicSquareOrNot(n);
return 0;
}

