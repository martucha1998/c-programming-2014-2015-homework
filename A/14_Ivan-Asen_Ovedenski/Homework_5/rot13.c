#include <stdio.h>
void code () {
	int i = 0 ,count = 1;
	char cod[100] ;
	getchar();
	printf("\nVuvedi Duma :");
	while (count == 1) {
		scanf("%c",&cod[i]);
		if (cod[i] == '\n') {
			break;
		}
		i++;
	}
	i = 0;
	count = 1;
	while (count == 1) {
		if (cod[i] == '\n') {
			break;
		}
		if (cod[i] >= 'a' && cod[i] <= 'z') {
			if (cod[i] < 'm') {
			cod[i] += 13;
			} else {
			cod[i] -= 13;
			}
		}
		if (cod[i] >= 'A' && cod[i] <= 'Z') {
			if (cod[i] < 'M') {
			cod[i] += 13;
			} else {
			cod[i] -= 13;
			}
		}
		i++;
	}
	i = 0;
	while (count == 1) {
		if (cod[i] == '\n') {
			break;
		}
		printf("%c",cod[i]);
		i++;
	}
	printf("\n");
}
int main () {
	int counter = 1;
	char opt;
	printf("Insert option: ");
	scanf("%c",&opt);
	while (opt != 'q') {
		if (opt == 'c') {
			code();
		
		}
		if (opt == 'd') {
			code();
			
		}
	    printf("\nInsert option: ");
		scanf("%c",&opt);
	
	}
	return 0;
}
