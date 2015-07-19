#include <stdio.h>

void Crypt()
{
	int i;
	char textA[1000], textB[1000];
	scanf("%s", textA);
	for (i = 0; textA[i] != '\0'; ++i){
		if ((textA[i] >= 65 && textA[i] <= 77) || (textA[i] >= 97 && textA[i] <= 109)){
		textB[i] = textA[i] + 13;
		}
		else if ((textA[i] >= 78 && textA[i] <= 90) || (textA[i] >= 109 && textA[i] <= 122)){
		textB[i] = textA[i] - 13;
		}
		else{
		textB[i] = textA[i];
		}
	}
	textB[i] = '\0';
	printf(" %s\n", textB);
}

int main(){
	char entry;
	do{
		scanf("%c", &entry);
		if (entry == 'c' || entry == 'd'){
			Crypt();
		}
	} while (entry != 'q');
	return 0;
}