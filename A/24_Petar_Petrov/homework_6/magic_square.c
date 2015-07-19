#include<stdio.h>

int SIZE,row_counter,column_counter;

void checkMagic(int arr1[999][999],const int magic_sum)
{
  int sum = 0;
  for(row_counter = 0; row_counter < SIZE; row_counter++)
  {
     for(column_counter = 0; column_counter < SIZE; column_counter++)
     {
        sum += arr1[row_counter][column_counter];
     }
     if(sum != magic_sum)
     {
        printf("NO MAGIC\n");
        return;
     }
     sum = 0;
  }
  for(column_counter = 0; column_counter < SIZE; column_counter++)
  {
     for(row_counter = 0; row_counter < SIZE; row_counter++)
     {
        sum += arr1[row_counter][column_counter];
     }
     if(sum != magic_sum)
     {
        printf("NO MAGIC\n");
        return;
     }
     sum = 0;
  }
  for(row_counter = 0, column_counter = 0; row_counter < SIZE; row_counter++, column_counter++)
  { 
     sum += arr1[row_counter][column_counter];
  }
  if(sum != magic_sum)
  {
     printf("NO MAGIC\n");
     return;
  }
  sum = 0;
  for(column_counter = SIZE - 1, row_counter = 0; row_counter < SIZE; row_counter++, column_counter--)
  {
     sum += arr1[row_counter][column_counter];
  } 
  if(sum != magic_sum)
  {
     printf("NO MAGIC\n");
     return;
  }
  else
  {
     printf("MAGIC\n");
     return;
  }
}
int main()
{
   int arr[999][999];
 
   printf("Please input the size of the square(number of rows and columns):\n");
   scanf("%d",&SIZE);
   const int magic_sum = (SIZE*(SIZE*SIZE+1))/2;
   for(row_counter = 0; row_counter < SIZE; row_counter++)
   {
      for(column_counter = 0; column_counter < SIZE; column_counter++)
      {
         printf("Please input a number:\n");
         scanf("%d",&arr[row_counter][column_counter]);
      }
   }
   checkMagic(arr,magic_sum);
   return 0;
}
