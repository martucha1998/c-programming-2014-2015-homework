#include <stdio.h>
void izqjnacepina(float Px, float Py, float *Cx, float *Cy, int bidoni) {
int kilata = 1, i;
float Vx, Vy;
for (i = 0; i < bidoni; i++) 
	{
	Vx = Cx[i] - Px;
	Vy = Cy[i] - Py;
	Vx = Vx + Vx/kilata;
	Vy = Vy + Vy/kilata;
	printf("%.2f %.2f\n", Vx, Vy);
	Px = Px + Vx;
	Py = Py + Vy;
	kilata = kilata * 2;
	}
printf("%.2f %.2f\n", Px, Py);
}
int main() {
int bidoni, i;
float Px, Py, Cx[1000], Cy[1000];
scanf("%d", &bidoni);
scanf("%f", &Px);
scanf("%f", &Py);
for (i = 0; i < bidoni; i++) {
scanf("%f", &Cx[i]);
scanf("%f", &Cy[i]);
}
izqjnacepina(Px, Py, Cx, Cy, bidoni);
return 0;
}
