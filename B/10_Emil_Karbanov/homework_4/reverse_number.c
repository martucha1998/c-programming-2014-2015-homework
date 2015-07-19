#include <stdio.h>
	int main(){

	int c; //n 
	int rev=0; //r
		scanf("%d",&c);
		while(c!=0){
    			rev=rev*10;
    			rev=rev+c%10;
    			c=c/10;    
    			   }
		printf("%d",rev);
		return 0;
}
