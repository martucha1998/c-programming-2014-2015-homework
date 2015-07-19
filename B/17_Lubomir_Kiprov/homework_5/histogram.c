#include<stdio.h>
	
	int main(){
		int a[12];
		int j[20];
		int k,b,i,n,x,g;
				g=20;				
				k=0;				
				do {				
				scanf("%d", &b);
				a[k]=b;
				k++; //1=5
				}while (k<12);
				n=0;
				for(i=0; i<=20; ++i){				
					j[i]=n;
					n++;
					            }
			i=0; k=0;x=1;
			printf("0:");
				do{
				if (j[i]==a[k]){
				printf("*");}
				k=k+1;
				}while (k<12);
			printf("\n");
			i=i+1;
			
			
			do{
			k=0;
			printf("%d:",x);
				do{
				if (j[i]==a[k]){
				printf("*");}
				k=k+1;
				}while (k<12);
			printf("\n");
			i=i+1;
			x++;
			}while(x<=g);
		
			return 0 ;
			}
