#include <stdio.h>
float  pacx, pacy, x[100], y[100];
int weight=1, n;

int vectorandprint( int numbernacepin)
{
	float vectx=0, vecty=0;
	vectx=x[numbernacepin]-pacx;
	vecty=y[numbernacepin]-pacy;
	vectx=vectx/weight+vectx;
	pacx=vectx+pacx;
	vecty=vecty/weight+vecty;
	pacy=vecty+pacy;
	printf("%f %f \n", vectx, vecty);

}

int main(){
	int i;
	scanf("%d", &n);
	scanf("%f %f", &pacx, &pacy);
	for(i=0; i<n; i++){
		scanf("%f", &x[i]);
		scanf("%f", &y[i]);
	}
	for(i=0; i<n; i++){
		vectorandprint(i);
		weight=weight*2;
	}
printf("%f %f \n", pacx, pacy);

return 0;
}
