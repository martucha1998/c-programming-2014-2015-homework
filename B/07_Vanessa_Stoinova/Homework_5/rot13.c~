#include<stdio.h>

void rot13() {
	int br;
        char message[100], NewMessage[100] ;
        scanf("%s", message);
	getchar();
        for(br = 0 ; message[br] != '\0' ; br ++) {
        	if( message[br] - 'A' <= 12 || message[br] - 'a' <= 12) {
                	NewMessage[br] = message[br] + 13 ;
                }else{
                	if( message[br] - 'A' > 12 || message[br] - 'a' > 12) {
				NewMessage[br] = message[br] - 13 ;
                        }else{
                        	NewMessage[br] = message[br];
                        }
               }
        }
	NewMessage[br] = '\0' ;
        printf("%s\n", NewMessage) ;
        getchar();
}

int main () {
	char key; 
        printf("Enter option: ");
	scanf("%c", &key);
        while(key != 'q') {
		if(key == 'c' || key == 'd') {
                	rot13();
        	printf("Enter Option: ");		
		getchar();
                }
                scanf("%c", &key);
        }

return 0;
}
