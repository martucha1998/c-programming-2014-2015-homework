#include<stdio.h>
int main()
{
   int nacepin_num,counter,pac_mass = 1;
   float pac_coordinate_x = 0,pac_coordinate_y = 0,
         nacepin_coordinate_x[20],nacepin_coordinate_y[20],
         vector_length_x,vector_length_y;
         
   printf("Please input the desired number of nacepin barrels:\n");
   scanf("%d",&nacepin_num);
   for(counter = 1; counter <= nacepin_num; counter++)
   {
      printf("Please input the x and y coordinates of nacepin barrel %d:",counter);
      printf("\n");
      scanf("%f %f",&nacepin_coordinate_x[counter],&nacepin_coordinate_y[counter]);
   }
   for(counter = 1; counter <= nacepin_num; counter++)
   {
      vector_length_x = (nacepin_coordinate_x[counter] - pac_coordinate_x) + (nacepin_coordinate_x[counter] - pac_coordinate_x)/pac_mass;
      vector_length_y = (nacepin_coordinate_y[counter] - pac_coordinate_y) + (nacepin_coordinate_y[counter] - pac_coordinate_y)/pac_mass;
      printf("%.1f %.1f\n",vector_length_x,vector_length_y);
      pac_mass *= 2;
      pac_coordinate_x += vector_length_x;
      pac_coordinate_y += vector_length_y;
      printf("%d\n",pac_mass);
   }
   printf("%.1f %.1f\n",pac_coordinate_x,pac_coordinate_y);
   return 0;
}
