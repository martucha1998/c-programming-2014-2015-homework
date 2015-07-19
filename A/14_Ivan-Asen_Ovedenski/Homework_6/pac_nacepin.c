#include <stdio.h>
float nachalni, kordinati ;
int bidoni;

float pac_nacepin(float kordinati_x[100],float kordinati_y[100])
{
	float kraini[100],kord[100],slide_1[100],slide_2[100],posledni,cordinati;
	int masa;
	kraini[0] = nachalni;
	kord[0] = kordinati ;
	for (masa = 1;masa <= bidoni;masa++)
	{
		kraini[masa] = kordinati_x[masa] - kraini[masa-1];
		kord[masa] = kordinati_y[masa] - kord[masa-1] ;
		slide_1[masa] = kraini[masa] / masa;
		slide_2[masa] = kord[masa] /masa;
		kraini[masa] = kraini[masa] + slide_1[masa];
		kord[masa] = kord[masa] + slide_2[masa] ;
		printf("%.2f %.2f\n", kraini[masa] , kord[masa]);
		posledni = kraini[masa] + posledni;
		cordinati = kord[masa] + cordinati;
	}
	printf("Kraini Kordinati na Pac-Nacepin %.2f %.2f\n", posledni, cordinati);
	return 0;
}

int main () 
{	
	float kordinati_x[100];
	float kordinati_y[100];
 	int i,count;
	float x,y;
	printf("Vuvedi broi bidoni s nacepin :");
	scanf("%d", &bidoni);
	printf("Vuvedi nachalni kordinati na Pac-nacepin : ");
	scanf("%f %f", &nachalni, &kordinati);
	for (i = 1;i <= bidoni;i++) 
	{
		printf("\nVuvedi kordinati na bidon %d  ", i);
		scanf("%f %f", &kordinati_x[i], &kordinati_y[i]);  
	}
		pac_nacepin(kordinati_x,kordinati_y);
		
	
	return 0;
}
