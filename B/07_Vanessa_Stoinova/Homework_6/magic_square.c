#include<stdio.h>

 int main () { 
	int square_size, counter, counter_1, counter_2, diagonal_1= 0, diagonal_2 ;
	scanf("%d", &square_size) ;
	diagonal_2 = 0 ;
	int square_number[20][20], abcissian_sum[square_size], ordinate_sum[square_size] ;
	for(counter = 0 ; counter < square_size ; counter ++) {
		abcissian_sum[counter] = 0 ;
		ordinate_sum[counter] = 0 ;
	}
	for(counter_1 = 0 ; counter_1 < square_size ; counter_1 ++) {
		for(counter_2 = 0 ; counter_2 < square_size ; counter_2 ++) {
			scanf("%d", &square_number[counter_1][counter_2]) ;
			abcissian_sum[counter_1]=abcissian_sum[counter_1] + square_number[counter_1][counter_2] ;
		}
		diagonal_1 = diagonal_1 + square_number[counter_1][counter_1] ;
		diagonal_2 = diagonal_2 + square_number[counter_1][counter_2 - (counter_1 + 1)] ;
		for(counter = 0 ; counter < square_size ; counter ++) {
			ordinate_sum[counter] = ordinate_sum[counter] + square_number[counter_1][counter] ;
		}
	}
	counter_1 = 0 ;
	for(counter = 0 ; counter < square_size ; counter ++) {
		if(abcissian_sum[counter_1] =! abcissian_sum[counter_1 + counter] 
		|| ordinate_sum[counter] != ordinate_sum[counter + counter_1] ) { 
			printf("NOT MAGIC\n");
			break ;
		}
	}
	if(diagonal_1 != abcissian_sum[1] || diagonal_1 != ordinate_sum[1] || diagonal_1 != diagonal_2) {
		printf("NOT MAGIC\n") ;
	}else{
		printf("MAGIC\n") ;
	}
	printf("\n") ;
	return 0 ;
 } 
