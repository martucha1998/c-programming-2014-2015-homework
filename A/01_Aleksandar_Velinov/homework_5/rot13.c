#include <stdio.h>

int main(){
	char a[2000];
	char b;
	int i;
	do{
		printf("Enter option: \n");
		scanf("%c", &b);
		if((b=='c') || (b=='d')){
			scanf("%s", a);
			for(i=0;i!='0';i++){
				if(a[i]>='A' && a[i]<='M') a[i]+=13;
				if(a[i]>='N' && a[i]<='Z') a[i]-=13;
				if(a[i]>='a' && a[i]<='m') a[i]+=13;
				if(a[i]>='n' && a[i]<='z') a[i]-=13;
			}
			printf("%s\n", a);
		}
	} while(b!='q');
	return 0;
}
