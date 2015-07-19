#include <stdio.h>
void rot13(char masiv2[1000], int first){
	if(first == 0){
		int i;
		for (i = 0; masiv2[i] != '\0' && masiv2[0] !='c' && masiv2[0] !='d'; i++){
			if (masiv2[i] >= 'A' && masiv2[i] <= 'Z'){
				int temp = masiv2[i];
				int num = temp - 'A';
				num = (num + 13) % 26;
				masiv2[i] = 'A' + num;
			} 
			else 
			if (masiv2[i] >= 'a' && masiv2[i] <= 'z'){
				int temp = masiv2[i];
				int num = temp - 'a';
				num = (num + 13) % 26;
				masiv2[i] = 'a' + num;
			}
		}
		printf("%s ", masiv2);
	}
}
int main() {
	char masiv[1000];
	int first = 1;

	printf("Enter option: ");
	while(scanf("%1000s", masiv) && (masiv[0] != 'q')){
		rot13(masiv, first);
		first = 0;
		printf("\nEnter option: ");
	}
	return 0;
}