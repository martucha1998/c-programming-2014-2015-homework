#include<stdio.h>
void buhainacepina(float Pacx, float Pacy, float *Bx, float *By, int n)
{
	int masa=1,i;
	float Vectorx,Vectory;
	for(i=0;i<n;i++)
	{
		Vectorx=Bx[i]-Pacx;
		Vectory=By[i]-Pacy;
		Vectorx=Vectorx+Vectorx/masa;
		Vectory=Vectory+Vectory/masa;
		printf("%.2f %.2f\n", Vectorx,Vectory);
		Pacx=Pacx+Vectorx;
		Pacy=Pacy+Vectory;
		masa=masa*2;
	}
	printf("%.2f %.2f\n", Pacx, Pacy);
}
int main()
{
	int n,i;
	float Pacx,Pacy,Bx[900],By[900];
	scanf("%d", &n);
	scanf("%f", &Pacx);
	scanf("%f", &Pacy);
	for(i=0;i<n;i++)
	{
		scanf("%f", &Bx[i]);
		scanf("%f", &By[i]);
	}

	buhainacepina(Pacx,Pacy,Bx,By,n);
	return 0;
}