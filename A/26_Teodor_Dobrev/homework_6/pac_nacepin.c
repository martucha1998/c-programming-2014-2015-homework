#include <stdio.h>

int main () {

	int all_nacepin_number;
	printf("Enter the number of all nacepin barrels ... : \n");
	while (all_nacepin_number<1) {
		scanf("%d", &all_nacepin_number);
	}

	float x_strarting_position_pacman;
	float y_strarting_position_pacman;
	printf("Enter the starting posittion of pacman by X and Y ... : \n");
	scanf("%f", &x_strarting_position_pacman);
	scanf("%f", &y_strarting_position_pacman);

	int i;
	float array_all_nacepin_positions_x [ all_nacepin_number ];
	float array_all_nacepin_positions_y [ all_nacepin_number ];
	printf("Enter all nacepin positions by X and Y... : \n");
	for (i = 0; i < all_nacepin_number; i++) {
		printf("barrel number :%d :", i+1);
		scanf("%f", &array_all_nacepin_positions_x[i]);
		scanf("%f", &array_all_nacepin_positions_y[i]);
	}
	
	
	int a;
	float total_vector_x;
	float total_vector_y;
	int weight=1;
	for (a=0; a < all_nacepin_number; a++) {
		
		total_vector_x = x_strarting_position_pacman + (( array_all_nacepin_positions_x[a] - x_strarting_position_pacman ) + ( array_all_nacepin_positions_x[a] - x_strarting_position_pacman )/weight);
		total_vector_y = y_strarting_position_pacman + (( array_all_nacepin_positions_y[a] - y_strarting_position_pacman ) + ( array_all_nacepin_positions_y[a] - y_strarting_position_pacman )/weight);
		if (a>0) { printf("%f     %f\n", total_vector_x - x_strarting_position_pacman, total_vector_y - y_strarting_position_pacman); }
		printf("%f     %f\n", total_vector_x, total_vector_y);
		x_strarting_position_pacman = total_vector_x ;
		y_strarting_position_pacman = total_vector_y ;
		weight = weight*2;
	}
	return 0;
}
