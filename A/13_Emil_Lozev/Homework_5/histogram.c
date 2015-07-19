#include<stdio.h>

int main(){
 int n,i,a,k,num;
 int arr[100],nn[9];
  
  printf("Enter range: ");
  scanf("%d", &n);
 do{
  printf("Enter length: ");
  scanf("%d", &i);
    }
   while(i>n);
   a = 0;
  do{
  printf("Enter array: ");
  scanf("%d",&arr[a]);
  a++;
  }
   while(a<i);
  
 	for(a = 0; a <= 9; a++){
	   printf("%d: ",a);
          for(num = 0; num <= i; num++){
 		if(arr[num] == a){
		 printf("*");
		}
	  }
	  printf("\n");
	}
	 printf("N: %d\n",n);
return 0;
}
