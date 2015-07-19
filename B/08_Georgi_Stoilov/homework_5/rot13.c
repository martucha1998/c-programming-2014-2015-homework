#include <stdio.h>

void rot13(char arr[1000]){
	int i;
	for(i = 0; arr[i] != '\0'; i++){
		char ch=arr[i];
		int number, n;
		if(ch >= 'A' && ch <= 'Z'){
			number = ch - 'A';
			n = 13;
			number = (number + n) % 26;
			arr[i] = 'A' + number;
		}
		else if(ch >= 'a' && ch <= 'z'){
			number = ch - 'a';
			n = 13;
			number = (number + n) % 26;
			arr[i] = 'a' + number;
		}
				
	}
	printf("%s\n",arr);
}

void encryption(char enc[1000]){
	while(scanf("%1000s", enc)) {
		rot13(enc);
	}
}

void decryption(char dec[1000]){
	while(scanf("%1000s", dec)) {
		rot13(dec);
	}
}

int main(){
	char b, chr[1000];
	printf("Enter option 'c' for encryption the text, 'd' for decryption the text or 'q' for exit the program:");
	scanf("%c", &b);
	while(b == 'c'){
		printf("Input the text for ecnryption.\n");
		encryption(chr);
	}
	while(b == 'd'){
		printf("Input the text for decryption.\n");
		decryption(chr);
	}
	while(b == 'q'){
		printf("You exit the program.\n");
		return 0;
	}
	return 0;
}
