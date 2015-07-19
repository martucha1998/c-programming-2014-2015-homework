#include <stdio.h> 
#define MAX_GROUND 250
void get_cordinates_change(float row[MAX_GROUND], float colum[MAX_GROUND], int drums) {
	int counter, weight=1;
	float change_rows, change_colums, end_rows=row[0], end_colums=colum[0];
	for (counter=0; counter<drums; counter++){		
		change_rows=row[counter+1]-row[counter];
		change_colums=colum[counter+1]-colum[counter];
		change_rows=change_rows+(change_rows/weight);
		change_colums=change_colums+(change_colums/weight);
		row[counter+1]=change_rows;
		colum[counter+1]=change_colums;
		printf("%.2f %.2f\n", change_rows, change_colums);
		weight=weight*2;
		end_rows=end_rows+change_rows;
		end_colums=end_colums+change_colums;
	}
	printf("%.2f %.2f\n", end_rows, end_colums);
}
int main() {
	float row[MAX_GROUND], colum[MAX_GROUND];
	int drums, counter;
	printf("Enter the number of drums: \n");
	scanf("%d", &drums);
	printf("Enter the row on which is PAC-MENKA: \n");
	scanf("%f", &row[0]);
	printf("Enter the colum on which is PAC-MENKA: \n");
	scanf("%f", &colum[0]);
	for(counter=1; counter<=drums; counter++){
		printf("Enter row for %d drum: \n", counter);
		scanf("%f", &row[counter]);
		printf("Enter colum for %d drum: \n", counter);
		scanf("%f", &colum[counter]);
	}
	get_cordinates_change(row, colum, drums);
	return 0;
}

