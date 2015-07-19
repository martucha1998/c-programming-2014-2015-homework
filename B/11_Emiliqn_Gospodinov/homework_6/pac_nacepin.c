#include <stdio.h>


int main(){
	int n,i=0,weight=1;
	float x,y,bidoni_kords_x[999],bidoni_kords_y[999];
	scanf("%d", &n);
	scanf("%f %f", &x, &y);
	for(i=0; i<n; i++){
		scanf("%f %f", &bidoni_kords_x[i], &bidoni_kords_y[i]);	
			
	}
	for(i = 0; i < n; i++){
		float f_vector=bidoni_kords_x[i]-x;
		float s_vector=bidoni_kords_y[i]-y;
		f_vector = f_vector + (f_vector/weight);
		s_vector = s_vector + (s_vector/weight);
		printf("%.2f %.2f\n", f_vector, s_vector);
		x=x+f_vector;
		y=y+s_vector;
		weight=weight*2;
	}
	printf("%.2f %.2f\n", x, y);
return 0;
}
