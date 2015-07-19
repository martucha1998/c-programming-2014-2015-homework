#include <stdio.h>

int main () {
	int i, a;
	char arr[1000]="UbjZnalCebtenzfQvqlbhJevgrGuvfJrrx";	
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
	printf("%s\n",arr);
	return 0;
}
