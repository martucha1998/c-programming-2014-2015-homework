#include <stdio.h>

#define MAX_SIZE 999
int sum = 0;

void Initialize_Square(int square[MAX_SIZE][MAX_SIZE], int size){
	int j;
	 for (j = 0; j < size; ++j) {
	  int i;
		for (i = 0; i < size; ++i){
			scanf("%d", &square[j][i]);
		}
	 }
}

int Are_Rows_Magic(int square[MAX_SIZE][MAX_SIZE], int size){
	int currentSum = 0;
	int j;
 for (j = 0; j < size; j++) {
	currentSum = 0; 
 	int i;
 	for (i = 0; i < size; i++) {
 		currentSum += square[j][i];
	}

	if (j == 0) {
	 sum = currentSum;
	}
	else if (currentSum != sum){
		return 0;
	}
 }
 return 1;
}

int Are_Columns_Magic(int square[MAX_SIZE][MAX_SIZE], int size){
	int currentSum = 0;
	int i;
	for (i = 0; i < size; i++){
		currentSum = 0; 
		int j;
		for (j = 0; j < size; j++){
		 currentSum += square[j][i];
		}
		if (currentSum != sum){
		 return 0;
		}
	}
return 1;
}

int Are_Diagonals_Magic(int square[MAX_SIZE][MAX_SIZE], int size){
	int currentSum = 0;
	int j;
	for (j = 0; j < size; j++){
		currentSum += square[j][j];
	}

	if (currentSum != sum){
		return 0;
	}

	for (j = 0; j < size; j++){
		currentSum += square[size - j - 1][j];
	}

	if (currentSum != sum){
		return 0;
	}
return 1;
}

int Is_Square_Magic(int square[MAX_SIZE][MAX_SIZE], int size){
	if (!Are_Rows_Magic(square, size) || !Are_Columns_Magic(square, size) || !Are_Diagonals_Magic(square, size)) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(){
	int square[MAX_SIZE][MAX_SIZE];
	int size;

	scanf("%d", &size);

	Initialize_Square(square, size);

	if (Is_Square_Magic(square, size)){
		printf("Magic\n");
	}
	else {
		printf("No Magic\n");
	}
	return 0;
}
