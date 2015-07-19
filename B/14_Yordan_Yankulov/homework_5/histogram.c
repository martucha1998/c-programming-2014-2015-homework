#include <stdio.h>
void main(){
	int i,i1;
	int arr[1000];
	int k;
	int count;
	int index;
	int g;
	scanf("%d",&i1);
	for(i=1;i<=i1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=i1;i++){
		k=arr[i];
		count=0;
		g=1;
		index=i;
		for(i+1;i<=i1;i++){
			if(k==arr[i]){
			count=count+1;
			}	
		}
		printf(":");
		if(g!=count){
			while(g<=count){
				printf("*");
				g=g+1;
			}
		}
		printf("\n");	
		i=index;

	}

}
