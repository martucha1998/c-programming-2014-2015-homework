#include <stdio.h>

int main()
{
	int n, i, mass=1;
	float pac_man_x, pac_man_y, vector_x, vector_y, slider;
	
	scanf("%d", &n);
	while(n < 1)
		printf("Write real number of NACEPINS: ");
	
	float nacepin_x[n];
	float nacepin_y[n];

	scanf("%f", &pac_man_x);
	scanf("%f", &pac_man_y);

	for(i=0; i<n; i++){
		scanf("%f", &nacepin_x[i]);
		scanf("%f", &nacepin_y[i]);
	}
		
	for(i=0; i<n; i++){
		vector_x = nacepin_x[i] - pac_man_x;
		slider = vector_x / mass;
		vector_x += slider;

		vector_y = nacepin_y[i] - pac_man_y;
		slider = vector_y / mass;
		vector_y += slider;

		pac_man_x += vector_x;
		pac_man_y += vector_y;
		
		mass *= 2;

		printf("%.2f %.2f \n", vector_x, vector_y);
	}
	
	printf("%.2f %.2f \n", pac_man_x, pac_man_y);
	return 0;
}
