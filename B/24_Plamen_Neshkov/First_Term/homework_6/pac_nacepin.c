#include <stdio.h>

void stanibatka(float xpos, float ypos, float *xcoord, float *ycoord, int bidoni) {
	int muskulnaMasa = 1, i;
	float xvector, yvector;

	for (i = 0; i < bidoni; i++) {
		xvector = xcoord[i] - xpos;
		yvector = ycoord[i] - ypos;
		xvector += xvector/muskulnaMasa;
		yvector += yvector/muskulnaMasa;
		printf("%.2f %.2f\n", xvector, yvector);
		xpos += xvector;
		ypos += yvector;
		muskulnaMasa *= 2;
	}

	printf("%.2f %.2f\n", xpos, ypos);
}

int main() {
	int bidoni, i;
	float xpos, ypos, xcoord[1000], ycoord[1000];

	scanf("%d", &bidoni);
	scanf("%f", &xpos);
	scanf("%f", &ypos);
	
	for (i = 0; i < bidoni; i++) {
		scanf("%f", &xcoord[i]);
		scanf("%f", &ycoord[i]);
	}

	stanibatka(xpos, ypos, xcoord, ycoord, bidoni);

	return 0;
}