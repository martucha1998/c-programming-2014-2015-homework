#include<stdio.h>
int main()
{
	int RowsAndColumns[999][999];
	int row;
	int column;
	int size;
	int sumcolumn, sumrow, sumdiagonal = 0;
	int marker = 0;
	printf("Write size of the array : \n");
	scanf("%d", &size);
	printf("Write the numbers:\n");
	for(row = 0; row < size; row ++){
		for(column = 0; column < size; column ++){
			scanf("%d", &RowsAndColumns[row][column]);
		}
	}	
	for(row = 0; row < size; row ++){
		for(column  = 0; column < size; column ++){
			if(row == column){
				sumdiagonal = sumdiagonal + RowsAndColumns[row][column];
			}
		}
	}
	for(row = 0; row < size; row ++){
		sumrow = 0;
		for( column = 0; column < size; column ++){
			sumrow = sumrow + RowsAndColumns[row][column];
		}
		if(sumrow == sumdiagonal) {
			marker = 1;	
		} else {
			marker = 0;
			break;
		}
	}
	
	for(column = 0; column < size; column ++) {
		sumcolumn = 0;
		for(row = 0; row < size ; row ++){
			sumcolumn = sumcolumn + RowsAndColumns[row][column];
		}
		if(sumcolumn == sumrow){
			marker = 1;
		} else{
			marker = 0;
			break;
		}
	}
	if( marker == 1){ 		
		printf(" Its Magic!\n");
	}else {
		printf(" Nope!\n");
	}
	return 0;
}		
	
			
			
	
