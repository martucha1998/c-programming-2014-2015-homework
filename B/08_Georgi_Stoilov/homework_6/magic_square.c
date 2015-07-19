#include <stdio.h>

int magic_square(int number_square)
{
	int i, j, magic_sum, number[999][999];
	int sum_rows[999], sum_colums[999], sum_diagonal_1, sum_diagonal_2;
		number[i][j] == 0;
		sum_rows[i] == 0;
		sum_colums[j] == 0;
		sum_diagonal_1 == 0;
		sum_diagonal_2 == 0;	
		magic_sum = (number_square*(number_square*number_square + 1)) / 2;
		for(i=0; i < number_square; ++i){

			for(j = 0; j < number_square; ++j){

				scanf("%d", &number[i][j]);

			}

		}

		for(i = 0; i < number_square; ++i){

			for(j = 0; j < number_square; ++j){

				sum_rows[i] += number[i][j];

			}

			if(sum_rows[i] != magic_sum){

				return 0;

			}
			
		}
		
		for(j = 0; j < number_square; ++j){

			for(i = 0; i < number_square; ++i){

				sum_colums[j] += number[j][i];

			}

			if(sum_colums[j] != magic_sum){

				return 0;

			}
			
		}
	
		for(i = 0; i < number_square; ++i){

			for(j = 0; j < number_square; ++j){

				if(j == i){

					sum_diagonal_1 += number[i][j];

				}

			}

		}

		if(sum_diagonal_1 != magic_sum){

			return 0;
	
		}
		for(i = 0; i < number_square; ++i){

			for(j = 0; j < number_square; ++j){

				if(i == j){

					sum_diagonal_2 += number[j][i];

				}

			}

		}

		if(sum_diagonal_2 != magic_sum){

			return 0;

		}
	return 1;
	
}

int main()
{
	int number_square;
		do{
		
			scanf("%d\n", &number_square);
	
		} while(number_square < 0 && number_square > 1000);

		if (magic_square(number_square) == 0){

			printf("NO MAGIC!\n");

		}
		else {

			printf("MAGIC!\n");

		}
	return 0;
}
