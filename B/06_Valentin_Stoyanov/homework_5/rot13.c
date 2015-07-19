#include <stdio.h>
void rot13(char arr[1000]) {
int i,x=sizeof(arr);
	for (i=0 ; i<=x/*arr[i] !='\0'*/ ; i++) {
		int number,n=13; 
		char ch=arr[i],ch1=arr[i];
		if (((arr[i] <= '/') || (arr[i] >= ':') && (arr[i] <= 'A'-1) 
			|| (arr[i] >='[') && (arr[i] <= '`') || (arr[i] >= '{'))) {arr[i]=ch1;
		}else{
			if ((arr[i]>='A') && (arr[i]<='Z')) {
				arr[i]='A';
				number=ch - 'A';
				number=(number+n) % 26;	
			}else {
				if ((arr[i]>='0') && (arr[i]<='9')) {
					number=ch - '0';
					arr[i]='0';
					number=(number+5) % 10;
				}else{
					number=ch - 'a';
					arr[i]='a';
					number=(number+n) % 26;
				}
		
			arr[i]=arr[i]+ number;
			}
		}
			
	}
printf("%s\n",arr);
}

int main () {
char mas[1000];
char opt;
while(1) {
	printf("Enter option: ");
	do{
	scanf("%c",&opt);
	if ((opt == 'c') || (opt == 'q') || (opt == 'd')) break;
	}while (1);
	switch (opt) {
		case 'c': 
			scanf("%1000s",mas);			
			rot13(mas);
			break;
		case 'd': 
			scanf("%1000s",mas);			
			rot13(mas);
			break;
		case 'q': break;
	}
	if (opt == 'q') break;
}
return 0;
}	
