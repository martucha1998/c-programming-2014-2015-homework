#include<stdio.h>

int main(){
	

	int i=0,j=0,l,r;
	printf("Enter range: \n");
	scanf("%d",&r);	  //r range
	printf("Enter lenght: \n");
	scanf("%d",&l);   //l length
	printf("Enter array: \n");

	int arr[1000];
	for(i=0;i<l;i++){
		scanf("%d",&arr[i]);
	}

	int harr[1000];
	for(i=0;i<l;i++){

			if(arr[i]>=0 && arr[i]<=r){
				harr[arr[i]]++;
			}
				
		
	}


	printf("Histogram:\n");

	for(i=0;i<=r;i++){
		printf("%d: ", i);
		for(j=0;j<harr[i];j++) {
			printf("*");
		}
		
		printf("\n");
	}


	return 0;
}
