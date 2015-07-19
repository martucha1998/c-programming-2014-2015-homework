#include <stdio.h>

int main(){
	int n,l,i,ix;
	printf("Enter range:\n");
	scanf("%d",&n);
	while (n<0) {
		scanf("%d",&n);
	}

	printf("Enter length:\n");
	scanf("%d", &l);
	while (l<0) {
		scanf("%d",&l);
	}
	
	int whatev[l];
	printf("Enter array values:\n");
	for (i=0;i<=l-1;i++) {
		scanf("%d",&whatev[i]);
		while (whatev[i]<0) {
			scanf("%d", &whatev[i]);
		}	
	}

	for (i=0;i<=n;i++) {
		printf("\n%d:",i);
		for (ix=0;ix<l;ix++){	
			if (whatev[ix] == i){
				printf("*");
			}
		}
	}	
	
	return 0;
}
