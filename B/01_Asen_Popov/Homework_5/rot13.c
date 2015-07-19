#include <stdio.h>

void encode(char m[100]) {
	int i,n;
	char c;
	for (i=0;m[i]!='\0';i++) {
		c=m[i];
		n=c;
		if (n>96){
			if (n>109)
				m[i]=n-13;
			else
				m[i]=n+13;
		}
		else{
			if (n>77){
				m[i]=n-13;
			}
			else{
				m[i]=n+13;
			}
		}
		
	}
	printf("%s\n", m);
}
int main(){
	char whatev;
	char forev[100];
	printf("Choose option:\n");
	do{   
		scanf("%c", &whatev);
		if ((whatev=='c') || (whatev=='d')){
			scanf("%s", forev);
			encode(forev);
		}		
	} 
	while (whatev!='q');
	return 0;
}
