#include <stdio.h>

void isMagic(int square[999][999],int n){
	int magical = 1;
	int i;
	int j;

	for(i=0; i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &square[i][j]);

	int curr_sumrows = 0;
	int prev_sumrows = 0;

	int curr_sumcols = 0;
	int prev_sumcols = 0;

	for(i=0;i<n;i++) {

		prev_sumrows = curr_sumrows;
		curr_sumrows = 0;

		prev_sumcols = curr_sumcols;
		curr_sumcols = 0;


		for(j = 0; j < n; j++){
			curr_sumrows = curr_sumrows + square[i][j];
			curr_sumcols = curr_sumcols + square[j][i];
		}
		
		if(i==0) {
			prev_sumrows = curr_sumrows;
			prev_sumcols = curr_sumcols;
		}

		if(curr_sumrows != prev_sumrows || curr_sumcols != prev_sumcols)
			magical = 0;
	}

	j = 0;
	int curr_sumdiag1 = 0;
	int curr_sumdiag2 = 0;

	for(i = n-1; i >= 0; i--) {

		curr_sumdiag1 = curr_sumdiag1 + square[i][j];
		curr_sumdiag2 = curr_sumdiag2 + square[i][i];
		j++;

	}

	if(curr_sumdiag1 != curr_sumcols || curr_sumdiag2 != curr_sumcols)
			magical = 0;

	if(magical == 1)
		printf("MAGIC\n");
	else
		printf("NO MAGIC\n");
}

int main(){

	int n;
	scanf("%d", &n);

	while(n<0 && n > 999)
		scanf("%d",&n);

	int square[999][999];

	isMagic(square, n);

	return 0;
}