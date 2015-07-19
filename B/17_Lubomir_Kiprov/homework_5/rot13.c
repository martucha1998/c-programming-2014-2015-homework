#include <stdio.h>

	void cod(){

	char a[100], script1[100];
		scanf("%s", a);
	int i; 
		
		for(i=0;a[i]!='\0';i++){		
	
		if((a[i]>=65 && a[i]<=77) || (a[i]>=97 && a[i]<=109))
			script1[i]=a[i]+13;
		else if((a[i]>=78 && a[i]<=90) || (a[i]>=109 && a[i]<=122))
			script1[i]=a[i]-13;
		else 	script1[i]=a[i];
		}
			script1[i]='\0';
			printf("%s\n", script1);
			
		}
	int main(){
		
			
			char k;
			printf("press c and enter to encode\n");
			printf("press d and enter to decode\n");
			printf("press q and enter to exit from program\n");
			printf("\n");	
			
		while(k!='q'){
			scanf("%c",&k);
		if(k=='c' || k=='d')
			cod();
			     }		
	return 0;
	}
