#include <stdio.h>

int main()
{
	int n, i;
	float x, y, arr[2*n], mass=1.0;
	printf("Enter the number of nacepins: \n");
	scanf("%d", &n);
	printf("Enter pac-man's coordinates: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	printf("Enter the coordinates of all nacepins: \n");
	for(i=0;i<(2*n);i++)
	scanf("%f", arr[i]);
	for(i=0;i<(2*n);i+=2){
		if(arr[i]!=x){
		x+=(arr[i]-x)/mass;
		printf("%f\n", x);
		}
		else printf("0.0\n");
		if(arr[i=1]!=y){
		y+=(arr[i+1]-y)/mass;
		printf("%f", y);
		}
		else printf("0.0");
		mass*=2;
	}
	return 0;
}
