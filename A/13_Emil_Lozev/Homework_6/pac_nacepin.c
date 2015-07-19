#include<stdio.h>

int main()
{

	float pacman_coordinate_x = 0, pacman_coordinate_y = 0, nacepin_x[100], nacepin_y[100], vector_x, vector_y;
	int counter, pacman_mas = 1, number_of_nacepin;

	scanf("%d", &number_of_nacepin);
	scanf("%f %f", &pacman_coordinate_x, &pacman_coordinate_y);
	
	for(counter = 1; counter <= number_of_nacepin; counter++)
	{
		scanf("%f %f", &nacepin_x[counter], &nacepin_y[counter]);
	}

	for(counter = 1; counter <= number_of_nacepin; counter++)
	{
		vector_x = (nacepin_x[counter] - pacman_coordinate_x) + (nacepin_x[counter] - pacman_coordinate_x)/pacman_mas;
		vector_y = (nacepin_y[counter] - pacman_coordinate_y) + (nacepin_y[counter] - pacman_coordinate_y)/pacman_mas;
	
		printf("%.1f %.1f \n", vector_x, vector_y);
		
		pacman_mas *= 2; 
		
		pacman_coordinate_x += vector_x;
		pacman_coordinate_y += vector_y;
	}

	printf("%.1f %.1f\n",pacman_coordinate_x,pacman_coordinate_y);
return 0;
}
