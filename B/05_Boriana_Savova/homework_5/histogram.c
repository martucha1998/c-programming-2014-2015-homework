#include <stdio.h> 
int main(){
int l, i, j, range, length;
int origarray[length];
printf("length:");
scanf("%d",&length);
printf("range:");
scanf("%d",&range);
printf("array:");
	for (i=0; i<=length; i++) {
		scanf("%d", &origarray[i]);
}

for(i=0;i<=range;i++){
printf("%d:",i);
	for(l=0;l<length;l++){
		if(i==origarray[l]){
			printf("*");
		}
	}
printf("\n");
}
return 0;
}
