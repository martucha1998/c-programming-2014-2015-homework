#include <stdio.h>

int main(){

	int n;
	scanf("%d", &n);

	float x;
	float y;
	scanf("%f %f", &x, &y);

	int i;
	float bidoni[n][2];
	for(i=0; i<n; i++)
		scanf("%f %f", &bidoni[i][0], &bidoni[i][1]);

	int weight = 1;

	for(i=0; i<n; i++){
		float izm_x = bidoni[i][0] - x;
		float izm_y = bidoni[i][1] - y;

		izm_x = izm_x + izm_x/weight;
		izm_y = izm_y + izm_y/weight;

		x = x + izm_x;
		y = y + izm_y;

		weight*=2;
		printf("%.2f %.2f\n", izm_x, izm_y);
	}

	printf("%.2f %.2f\n", x, y);

	return 0;
}