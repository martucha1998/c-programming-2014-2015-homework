#include <stdio.h>

#define MaxDrums 100
#define Double 2

void coordinatesOfPacmanAndVectors 
(int drums,float Xpac,float Ypac,float Xdrum[MaxDrums],float Ydrum[MaxDrums])
{
	float vectorX,vectorY;
	int weight=1,i;
	for (i=0 ; i<drums ; i++) {
		vectorX = Xdrum[i] - Xpac;
		vectorY = Ydrum[i] - Ypac;
		vectorX += vectorX / weight;
		vectorY += vectorY / weight;
		printf("%.2f %.2f\n", vectorX,vectorY);
		Xpac += vectorX;
		Ypac += vectorY;
		weight = weight * Double;
	}
	printf("%.2f %.2f\n", Xpac, Ypac);
}

int main () {
	int n,counter;
	float x,y;
	float YcoordinatesOfTheDrums[MaxDrums],XcoordinatesOfTheDrums[MaxDrums];
	scanf("%d", &n);
	scanf("%f", &x);
	scanf("%f", &y);
	for (counter=0 ; counter<n ; counter++) {
		scanf("%f", &XcoordinatesOfTheDrums[counter]);
		scanf("%f", &YcoordinatesOfTheDrums[counter]);
	}
	coordinatesOfPacmanAndVectors(n,x,y,XcoordinatesOfTheDrums,YcoordinatesOfTheDrums);
return 0;
}
