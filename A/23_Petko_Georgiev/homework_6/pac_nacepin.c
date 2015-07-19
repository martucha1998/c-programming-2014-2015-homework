#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	float pacx,pacy,nacx[N],nacy[N],dx,dy,MuscleMass=1.0f;
	scanf("%f %f",&pacx,&pacy);
	for(i=0;i<N;i++) { scanf("%f %f",&nacx[i],&nacy[i]); }
	for(i=0;i<N;i++)
	{
		dx=nacx[i]-pacx;
		dy=nacy[i]-pacy;
		dx+=dx/MuscleMass;
		dy+=dy/MuscleMass;
		printf("%.2f %.2f\n",dx,dy);
		pacx+=dx;
		pacy+=dy;
		MuscleMass*=2;
	}
	printf("%.2f %.2f",pacx,pacy);
	return 0;
}
