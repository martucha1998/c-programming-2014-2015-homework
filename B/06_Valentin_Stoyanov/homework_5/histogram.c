#include <stdio.h> 
int main () {
int range,length,counter,i,d,c;
printf("Enter range: ");
scanf("%d",&range);
int array[range+1];
do {
	printf("Enter length: ");
	scanf("%d",&length);
}while((length<0) && (length>1001));
int arr[length];
for (counter=0 ; counter<length ; counter++) {
	arr[counter]=0;
}
for (counter=0 ; counter<range+1 ; counter++) {
	array[counter]=0;
}
printf("Enter array: ");
for (counter=0 ; counter<length ; counter++) {
	do {
		scanf("%d",&arr[counter]);
	}while((arr[counter]<0) && (arr[counter]>range+1));
}		
for (counter=0 ; counter<length ; counter++) {
	for (d=0 ; d<range+1 ; d++) {
		if (arr[counter] == arr[d]) array[counter]=array[counter]+1;
	}	
}			
printf("Histogram:\n");
for (d=0 ; d<range+1 ;d++) {
printf("%d: ",d);
	for (counter=0 ; counter<array[counter] ; counter++) {printf("*");}
printf("\n");
}
return 0;
}

