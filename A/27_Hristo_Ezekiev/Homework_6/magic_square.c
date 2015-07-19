#include<stdio.h>

 
int main() {
   int size = 3;
   int num[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}};
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;
 
   printf("\nEnter a number(after each number press Enter) : \n");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &num[row][column]);
   }
 
   printf("Entered square is : \n");
   for (row = 0; row < size; row++) {
      printf("\n");
      for (column = 0; column < size; column++) {
         printf("\t%d", num[row][column]);
      }
   }
 
   //For diagonal elements
   sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + num[row][column];
      }
   }
 
   //For Rows
   for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + num[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   //For Columns
   for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + num[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   if (flag == 1)
      printf("\nMAGIC\n");
   else
      printf("\nNO MAGIC\n");
 
   return 0;
}
