#include <stdio.h>

int main () 
{
	int arr[50][50], check[100];
	int  m, a, i, n, a1;
	int check1 = 0, check2 = 0, check3 = 0, check4 = 0;
	n = 0;
	
	// Enter size of the cube ...
	while ((n < 1) || (n > 49)) {
		scanf("%d", &n);
	}
	
	// Enter numbers in the cube ...
	for (i = 0; i < n; i++) {
		printf("\n");
		for (a = 0; a < n; a++) {
			scanf("%d", &arr[i][a]);
		}
	}
	
	// if ( a1 == 1 ) { it means that the cube is not magical; }
	a1 = 0;
	
	// Checking the  rows ...
	for (i = 0; i < n; i++) {
		m = 0;
		for (a = 0; a < n; a++) {
			m = m + arr[i][a];
		}
		check[i] = m;
		if (i > 0) { if (check[i-1] != check[i]) { a1 = 1; }}
	}
	if (a1 == 1) { goto goodbye; }
	check1 = check[i];
	
	// Checking the columns ...
	for (a = 0; a < n; a++) {
		m = 0;
		for (i = 0; i < n; i++) {
			m = m + arr[i][a];
		}
		check[a] = m;
		if (a > 0) { if (check[a-1] != check[a]) { a1 = 1; }}
	}
	if (a1 == 1) { goto goodbye; }
	check2 = check[a];
	
	// Checking the main diagonal ...
	m = 0;
	for (i = 0; i < n; i++) {
		m = m + arr[i][i];
	}
	check[i] = m;
	check3 = check[i];
	
	// Checking the secondary diagonal ...
	m = 0;
	i = n-1;
	a = 0;
	while (a < n) {
		m = m + arr[i][a];
		i--;
		a++;
	}
	check[i] = m;
	check4 = check[i];
	
	// Checking if they are all the same ...
	if (check1 != check2) {a1 = 1;}
	if (check1 != check3) {a1 = 1;}
	if (check1 != check4) {a1 = 1;}
	
	// "goodbye" is a shortcut to the end if it isn't magical already ...
	goodbye:
	
	if (a1 == 0) { printf("MAGIC"); }
	if (a1 == 1) { printf("NO MAGIC"); }
	return 0;
}
