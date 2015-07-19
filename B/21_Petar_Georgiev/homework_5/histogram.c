#include <stdio.h>

int main(){
int n,i,i1,i2,length;
int arr[100];
printf("enter range:");
 	scanf("%d",&n);
printf("enter length:");
	scanf("%d",&length);
printf("enter array:");
for (i=0;i<length;i++){
	do {
 	scanf("%d",&arr[i]);
 	} while (arr[i] < 0 || arr[i] > n);
}
for (i1=0;i1<=n;i1++){
	printf("\n%d:",i1);
	for(i2=0;i2<length;i2++){
		if(arr[i2]==i1){
			printf("*");
		}
	}
}
printf("\n");

return 0;
}
