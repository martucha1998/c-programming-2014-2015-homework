#include <stdio.h>
int main(){
	int n, i, weight=1;
	float xcoord, ycoord;
	float first_coord[999], second_coord[999];
		printf("Input number of nacepin: ");
		scanf("%d\n", &n);
		scanf("%f %f", &xcoord, &ycoord);
		for(i = 0; i < n; i++){
		scanf("%f %f", &first_coord[i],&second_coord[i]);
		}
		for(i = 0; i < n; i++){
      float 1vec = first_coord[i] - xcoord;
			float 2vec = second_coord[i] - ycoord;
			1vec = 1vec + (1vec/weight);
			2vec = 2vec + (2vec/weight);
			printf("%.2f %.2f\n", 1vec, 2vec);
			xcoord =xcoord + 1vec;
			ycoord = ycoord + 2vec;
			weight = weight*2;
		
		}
		printf("%.2f %.2f\n", xcoord, ycoord);
	 
	
	return 0;
}
