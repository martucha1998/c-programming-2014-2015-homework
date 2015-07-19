#include <stdio.h>
void caesar(char arr[1000]){
	int i;
	for(i=0; arr[i] != '\0'; i++){
		char ch=arr[i];
		if((ch >='A') && (ch <='Z')){
			int number = ch-'A';
			int n = 13;
			number= (number + n)%26;
			arr[i]='A' + number;
		}else if((ch >='a') && (ch <='z')){
			int number = ch-'a';
			int n = 13;
			number= (number + n)%26;
			arr[i]='a' + number;
		}
	}
	printf("%s \n", arr);
}
void caesar1(char arr[1000]){
	int i;
	for(i=0; arr[i] != '\0'; i++){
		char ch=arr[i];
		int n=13;
		arr[i]= ch - n;
		}
	printf("%s \n", arr);
}
int main(){
	int i=0;
	char x;
	char trans[1000];
	printf("For encoding write 'c' and for decoding write 'd' and 'q' for exit\n");
	scanf("%c",&x);
	while(x != 'q'){
		if(x=='c'){
			scanf("%1000s",trans);
			caesar(trans);
		}
		else if(x=='d'){
			caesar1(trans);
		}
	scanf("%c",&x);
	}
	return 0;
}
