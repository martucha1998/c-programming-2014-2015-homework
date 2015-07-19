#include <stdio.h> 

void Crypting () {
	char text[10000];
	char crypting_text[10000];
	int a;

	scanf ("%s", text);

	for (a=0; text[a]!= '\0' ; a++) {
		if ((text[a]>=65 && text[a] <=77) || (text[a]>97 && text[a]<=109)) {
			crypting_text[a] = text[a]+13;		
			}
	else if ((text[a]>=78 && text[a] <=90) || (text[a]>109 && text[a]<=122)) {
			crypting_text[a] = text[a]-13;
			}
	else {
		crypting_text[a] = text[a];	
		}
	}
	crypting_text[a]= '\0';
	printf ("%s\n", crypting_text);

}

int main () {
	char choice;
	
	do {
		scanf ("%c", &choice);

		if (choice == 'd' || choice == 'c') {
			Crypting ();
			}

	} while (choice != 'q');	
	

	return 0;
}
