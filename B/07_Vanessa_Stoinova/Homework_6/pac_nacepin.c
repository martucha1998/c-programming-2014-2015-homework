#include <stdio.h>

int main() {
	int drum, counter, weight ;
	float xPac_man, yPac_man, abcissian_coordinates[1000], ordinate_coordinates[1000] ;
	scanf("%d", &drum) ;
	scanf("%f", &xPac_man) ;
	scanf("%f", &yPac_man) ;
	for (counter = 0 ; counter < drum ; counter ++) {
		scanf("%f", &abcissian_coordinates[counter]) ;
		scanf("%f", &ordinate_coordinates[counter]) ;
	}
	printf("\n") ;
	float abcissian_vector, ordinate_vector ;
	weight = 1 ;
	for (counter = 0 ; counter < drum ; counter++) {
		abcissian_vector = abcissian_coordinates[counter] - xPac_man ;
		ordinate_vector = ordinate_coordinates[counter] - yPac_man ;
		abcissian_vector = abcissian_vector + abcissian_vector/weight ;
		ordinate_vector = ordinate_vector + ordinate_vector/weight ;
		printf("%.2f %.2f\n", abcissian_vector, ordinate_vector) ;
		xPac_man = xPac_man + abcissian_vector;
		yPac_man = yPac_man + ordinate_vector;
		weight = weight * 2;
	}
	printf("%.2f %.2f\n", xPac_man, yPac_man);
	return 0;

 }
