#include <stdio.h>
 	
int main () {
	int range;
	printf("\nInsert range : ");
	scanf("%d",&range);
	if (range < 0) {
		scanf("%d",&range);
	}
	int length;
	printf("Insert length : ");
	scanf("%d",&length);
	if (length < 0){
		scanf("%d",&length);
	}
	printf("Insert numbers : ");
	int i,arr[length] ;
	for (i = 0;i < length;i++) {
		scanf("%d",&arr[i]);
		if (arr[i] > range){
			scanf("%d",&arr[i]);
		}
	}
	for (i = 0;i <= range;i++){
		int b;
		printf("\n%d: ",i);
		for (b = 0;b < length;b++){	
			if (arr[b] == i){
				printf("*");
			}
		}
	}
	printf("\nN: %d\n ",range);
	return 0;	
}
