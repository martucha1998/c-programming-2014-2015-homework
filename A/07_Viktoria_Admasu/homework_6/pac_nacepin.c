#include <stdio.h>

int main()
{
	int bidoni, a, pac_mass = 1;
	float pac_X = 0, pac_Y = 0, bidoni_X[20], bidoni_Y[20], vector_X, vector_Y;
	printf("Broi bidoni s nacepin: ");
	scanf("%d", &bidoni);
	
	for (a = 1; a <= bidoni; a++) 
	{
		printf("Koordinati X i Y na bidon %d: ", a);
		scanf("%f %f", &bidoni_X[a], &bidoni_Y[a]);
	}
	
	for (a = 1; a <= bidoni; a++) 
	{
		vector_X = (bidoni_X[a] - pac_X) + (bidoni_X[a] - pac_X) / pac_mass;
		vector_Y = (bidoni_Y[a] - pac_Y) + (bidoni_Y[a] - pac_Y) / pac_mass;
		
		printf("Vector X, vector Y: %.1f %.1f\n", vector_X, vector_Y);
		pac_mass *= 2;
		pac_X += vector_X;
		pac_Y += vector_Y;

		printf("Masata na Pacman: %d\n", pac_mass);
	}

	printf("Kraini koordinati na Pacman: %.1f %.1f\n", pac_X, pac_Y);

	return 0;
}
