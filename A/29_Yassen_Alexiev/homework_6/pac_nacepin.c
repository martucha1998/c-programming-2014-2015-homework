#include <stdio.h>

int main(){
 int barrels_num, i,pac_mass = 1;
 float pac_coordinate_x = 0,pac_coordinate_y = 0,

 barrels_coordinate_x[20],barrels_coordinate_y[20],
 vector_length_x, vector_length_y;

 printf("The desired number of nacepin barrels? :\n");
 scanf("%d",&barrels_num);

 for(i = 1; i <= barrels_num; i++) {
 	 printf("Please input the x and y coordinates of nacepin barrel %d:",i);
	 printf("\n");
	 scanf("%f %f",&barrels_coordinate_x[i],&barrels_coordinate_y[i]);
 }

 for(i = 1; i <= barrels_num; i++) {
	 vector_length_x = (barrels_coordinate_x[i] - pac_coordinate_x) + (barrels_coordinate_x[i] - pac_coordinate_x)/pac_mass;
	 vector_length_y = (barrels_coordinate_y[i] - pac_coordinate_y) + (barrels_coordinate_y[i] - pac_coordinate_y)/pac_mass;

	 printf("%.1f %.1f\n",vector_length_x,vector_length_y);

	 pac_mass *= 2;
	 pac_coordinate_x += vector_length_x;
	 pac_coordinate_y += vector_length_y;
 	printf("%d\n",pac_mass);
 }
 printf("%.1f %.1f\n",pac_coordinate_x,pac_coordinate_y);

 return 0;
}
