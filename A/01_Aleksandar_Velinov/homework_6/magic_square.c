#include <stdio.h>
int main()
{
	int size, counter, counter2, array[size][size];
	do{scanf("%d", &size);} while(size>=0 && size<=999);
	for(counter=0;counter<size;counter++){
	for(counter2=0;counter2<size;counter2++)
	scanf("%d\n", array[counter][counter2]);
	}
	return 0;
}
