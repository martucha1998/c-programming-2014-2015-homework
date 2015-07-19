#include<stdio.h>

void magic_square(int array_size);

int main()
{
 int array_size;

  scanf("%d\n",&array_size);
  magic_square(array_size);

return 0;
}

void magic_square(int array_size)
{
	int square_array[array_size][array_size];

  	int counter_row,counter_column,result,row_result[array_size],counter_row_magic,counter_column_magic,column_result[array_size], result_diagonal_1,result_diagonal_2, counter_final;

	for(counter_row = 0; counter_row < array_size; counter_row++)
	{
		for(counter_column = 0; counter_column < array_size; counter_column++)
  		{
    		scanf("%d",&square_array[counter_row][counter_column]);

		}
	 printf("\n");
	}	

	counter_row = 0;
	result = 0;
				
	for(counter_column = 0; counter_column < array_size; counter_column++)
	{
    	result = result + square_array[counter_row][counter_column];
  	}

	for(counter_row = 1; counter_row < array_size; counter_row++)
	{
		row_result[counter_row] = 0;

		for(counter_column = 0; counter_column < array_size; counter_column++)
		{
    		row_result[counter_row] = row_result[counter_row] + square_array[counter_row][counter_column];
  		}
		
		counter_row_magic = 1;

   		if(row_result[counter_row] != result)
		{
			printf("NO MAGIC\n");	
     			break;
   		}
   		else
		{
			counter_row_magic++;
 		}
	}
		
	counter_final = 0;

	if(counter_row_magic == array_size)
	{
		counter_final +=1;
	}

	for(counter_row = 0; counter_row < array_size; counter_row++)
  	{
		column_result[counter_row] = 0;

		for(counter_column = 0; counter_column < array_size; counter_column++)
		{
			column_result[counter_row] = column_result[counter_row] + square_array[counter_row][counter_column];
		}
		
		counter_column_magic = 0;

		if(column_result[counter_row] != result)
		{
			printf("NO MAGIC\n");
			break;
		}
		
		else
		{
			counter_column_magic++;
		}
	}
	if(counter_column_magic == array_size)
	{
		counter_final +=1;
	}

	result_diagonal_1 = 0;

	for(counter_column = 0; counter_column < array_size; counter_column++)
	{
		result_diagonal_1 = result_diagonal_1 + square_array[counter_column][counter_column];		
	}
	
	counter_column = 0;
	result_diagonal_2 =0;

	for(counter_row = (array_size-1) ; counter_row > 0; counter_row--)
  	{
			result_diagonal_2 = result_diagonal_2 + square_array[counter_row][counter_column];	
			counter_column++;
			result_diagonal_1 = result_diagonal_2;
	}

			if(result_diagonal_2 != result_diagonal_1)
			{
				printf("N MAGIC\n");
			}
		
			else 
			{ 
				counter_final +=1;
			}	

	if(counter_final == 3)
	{
		printf("MAGIC");
	}
}











