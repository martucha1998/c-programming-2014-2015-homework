#include <stdio.h>

void ROT13 (char arr[600]){
	int i;
	for(i = 0; arr[i] != '\0'; i++){
		char ch=arr[i];
		int number, n;
		if (ch >= 'A' && ch <= 'Z'){
			number = ch - 'A';
			n = 13;
			number = (number + n) % 26;
			arr[i] = 'A' + number;}
		else if (ch >= 'a' && ch <= 'z'){
		number = ch - 'a';
		n = 13;
		number = (number + n) % 26;
		arr[i] = 'a' + number;}} 
	        printf("%s\n",arr);}

void enc(char encr[600]){
	scanf("%600s", encr);
	ROT13(encr);}

void dec(char decr[600]){
	scanf("%600s", decr);
	ROT13(decr);}

int main () {
	char b, chr[600];
	b='*';	
	while (b!='q') {
	printf("Enter option : ");
	scanf("%c", &b);
	switch (b){
		case 'c' :
			enc(chr);
			break;
		case 'd' :
			dec(chr);
			break;
		default:
			break;}}	
	return 0; 
}
