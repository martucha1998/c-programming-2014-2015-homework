#include<stdio.h> 

int main () {

  int range, length, br, c, j ;
  printf("Enter range: ");
  scanf("%d", &range);
  int array[range], HowMuch[range] ;
  printf("Enter length: ");
  scanf("%d", &length);
  printf("Enter array: ");
  for( br = 0 ; br < length ; br++ ) {
  	scanf("%d", &array[br]);
  }
  for( br = 0 ; br < length ; br++ ) {
  	for( j = 0 ; j < length -1  ; j++ ) {
        	if(array[j] > array[j+1]) {
                	c = array[j] ;
                        array[j] = array[j+1] ;
                        array[j+1] = c ;
                 }
        }
  }
  for(br = 0 ; br < length ; br ++) {
  	HowMuch[br] = 0 ;
  	for(j = br + 1 ; j < length ; j++) {
        	if(array[br] == array[j]) {
                	HowMuch[br] = HowMuch[br] + 1 ;
                }
        }
  } 
  j = 0 ;
  printf("Histogram:\n");
  for(br = 0 ; br <= range ; br ++) 
  	if( br == array[j] ) {
        	printf("%d: ", br) ;
        	for(c = 0 ; c  <= HowMuch[j] ; c++) {
                	printf("*");
                }
                j = j + 1 + HowMuch[j];
                printf("\n");
        }else{
        	printf("%d: \n", br);
        }
 return 0;
}
