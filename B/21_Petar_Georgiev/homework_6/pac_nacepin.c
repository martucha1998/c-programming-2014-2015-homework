#include<stdio.h>

int main(){
	int i,pac_masa = 1,nacepin_count;
	float pac_x = 0, pac_y = 0,vect_x,vect_y,nacepin_x[100],nacepin_y[100];

	printf("how many nacepin?");
	scanf("%d", &nacepin_count);
	printf("pacman x,y?\n");
	scanf("%f %f", &pac_x, &pac_y);

	for(i = 1;i<=nacepin_count;i++){
		printf("nacepin x,y?\n");
		scanf("%f %f",&nacepin_x[i],&nacepin_y[i]);
	}
	for(i = 1;i<=nacepin_count;i++){
		vect_x = (nacepin_x[i] - pac_x) + (nacepin_x[i] - pac_x)/pac_masa;
		vect_y = (nacepin_y[i] - pac_y) + (nacepin_y[i] - pac_y)/pac_masa;
		printf("%.1f %.1f \n", vect_x, vect_y);
		pac_masa *= 2;
		pac_x += vect_x;
		pac_y += vect_y;
	}

	printf("%.1f %.1f\n",pac_x,pac_y);
	return 0;
}
