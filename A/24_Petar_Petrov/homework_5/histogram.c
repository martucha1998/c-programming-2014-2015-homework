#include<stdio.h>
int main()
{
   int range,length,range_counter,length_counter;
   printf("Please input the range of the numbers you want to find in the array:\n");
   scanf("%d",&range);
   printf("Please input the length of the array:\n");
   scanf("%d",&length);
   int arr[length];
   for(length_counter = 0; length_counter < length; length_counter++)
   {
      printf("Please input a number:\n");
      scanf("%d",&arr[length_counter]);
   }
   for(range_counter = 0; range_counter <= range; range_counter++)
   {
      printf("%d: ",range_counter);
      for(length_counter = 0; length_counter < length; length_counter++)
      {
         if(range_counter == arr[length_counter])
         {
            printf("*");
         }
      }
      printf("\n");
   }
   return 0;
}
