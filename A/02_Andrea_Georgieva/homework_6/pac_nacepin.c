#include<stdio.h>
pac_nacepin(int nace)
{
	 float vec_x[1000], vec_y[1000],coor_x[1000],coor_y[1000];
	 float m,end_x,end_y;
	 int i;
	 printf("Enter starting position of Pac-man\n");
	 printf("x = ");
	 scanf("%f", &coor_x[0]);
	 printf("y = ");
	 scanf("%f", &coor_y[0]);
	 for(i = 1; i <= nace; i++)
	 {
		 printf("Enter coordinates of %d nacepin :\n", i);
		 printf("x = ");
		 scanf("%f", &coor_x[i]);
		 printf("y = ");
		 scanf("%f", &coor_y[i]);
	 }
	 m = 0.5;
	 vec_x[0] = coor_x[0];
	 vec_y[0] = coor_y[0];
	 end_x = 0;
	 end_y = 0;
	 for(i = 1;i <= nace; i++)
	 {
		 m = m*2;
		 vec_x[i] = coor_x[i] - vec_x[i-1];
		 vec_x[i] = vec_x[i] + vec_x[i]/m;
		 vec_y[i] = coor_y[i] -vec_y[i-1];
		 vec_y[i] = vec_y[i] + vec_y[i]/m;
		 end_x= end_x  + vec_x[i];
		 end_y = end_y + vec_y[i];
		 printf("Vector %d :", i);
		 printf("(%.02f ; %.02f)\n ", vec_x[i], vec_y[i]);
		 vec_x[i] = vec_x[i] + vec_x[i-1];
		 vec_y[i] = vec_y[i] + vec_y[i-1];
	 }
	 end_x = end_x + coor_x[0];
	 end_x = end_y + coor_y[0];
	 printf("Target coordinates of Pac-man :");
	 printf("(%.02f ; ", end_x);
	 printf("%.02f) \n", end_y);
}
int main()
{
	 int a;
	 printf("Enter number of bottles of nacepin :");
	 scanf(" %d", &a);
	 pac_nacepin(a);
	 return 0;
}