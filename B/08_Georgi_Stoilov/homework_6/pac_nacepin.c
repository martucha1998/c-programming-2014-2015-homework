#include <stdio.h>

int main(){
	int n, i, weight=1;
	float x_vector, y_vector;
	float first_coordinates[999], second_coordinates[999];
		printf("Input number of nacepin: ");
		scanf("%d\n", &n);
		scanf("%f %f", &x_vector, &y_vector);
		for(i = 0; i < n; i++){

			scanf("%f %f", &first_coordinates[i], 		    						&second_coordinates[i]);

		}
		for(i = 0; i < n; i++){

			float f_vector = first_coordinates[i] - x_vector;
			float s_vector = second_coordinates[i] - y_vector;
			f_vector = f_vector + (f_vector/weight);
			s_vector = s_vector + (s_vector/weight);
			printf("%.2f %.2f\n", f_vector, s_vector);
			x_vector =x_vector + f_vector;
			y_vector = y_vector + s_vector;
			weight = weight*2;
		
		}
		printf("%.2f %.2f\n", x_vector, y_vector);
	 
	
	return 0;
}
