#include <stdio.h>

int main () {
	int max_numbers,max_value,a,j;
	int size[max_numbers];	
	
	printf ("Enter range: ");
	scanf ("%d", &max_value);
		
	printf ("Enter length: ");
	scanf ("%d", &max_numbers);

	printf ("Enter numbers: ");
	
	for (j=0; j< max_numbers; j++) {
		    scanf ("%d", &size[j]);
	}
	
	for (a=0 ; a<=max_value; a++) {
		printf ("%d: ",a);
		
		for (j=0; j<max_numbers; j++) {
			if (a==size[j]) {
				printf ("*");
				}
		}
	printf ("\n");
	}
	
	return 0;
}
