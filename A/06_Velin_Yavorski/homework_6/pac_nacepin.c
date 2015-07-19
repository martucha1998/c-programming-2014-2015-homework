#include<stdio.h>
pac_nacepin(int nacepin)
{
	float x_vector[1000];
	float y_vector[1000];
	float x_kord[1000];
	float y_kord[1000];
	float mass;
	int i;
	float xkrai,ykrai;
	printf("Vavedi nachalni kordinati na Pac-man\n");

	printf("x = ");
	scanf("%f", &x_kord[0]);

	printf("\n");

	printf("y = ");
	scanf("%f", &y_kord[0]);

	for(i=1;i<=nacepin;i++)
	{
		printf("Vavedi kordinati na %d bidon :\n", i);

		printf("x = ");
		scanf("%f", &x_kord[i]);

		printf("\n");

		printf("y = ");
		scanf("%f", &y_kord[i]);
	}

	mass = 0.5;
	x_vector[0] = x_kord[0];
	y_vector[0] = y_kord[0];
	xkrai = 0;
	ykrai = 0;
	for(i=1;i<=nacepin;i++)
	{
		mass = mass*2;
		x_vector[i] = x_kord[i] - x_vector[i-1];
		x_vector[i] = x_vector[i] + x_vector[i]/mass;
		y_vector[i] = y_kord[i] - y_vector[i-1];
		y_vector[i] = y_vector[i] + y_vector[i]/mass;
		
		xkrai = xkrai + x_vector[i];
		ykrai = ykrai + y_vector[i];

		printf("Vektor %d :\n", i);
		printf("%.02f %.02f \n", x_vector[i], y_vector[i]);
		
		x_vector[i] = x_vector[i] + x_vector[i-1]; 
		y_vector[i] = y_vector[i] + y_vector[i-1]; 
	}
	
	xkrai = xkrai + x_kord[0];
	ykrai = ykrai + y_kord[0];
	printf("Kraini kordinati na Pac-man :\n");
	printf("%.02f ", xkrai);
	printf("%.02f ", ykrai);
	printf("\n");
}
int main()
{
	int n;
	printf("Vavedi broi bidoni c nacepin :\n");
	scanf(" %d", &n);
	pac_nacepin(n);
	return 0;
}
