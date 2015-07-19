#include<stdio.h>
	int main()
{
			int row,sym,entn; 
			int arr[999][999],sum[999],count,rcount;
				row = 0;
				scanf("%d", &entn);
				do{
					sym = 0; row++;
					do{
						sym++;
						scanf("%d", &arr[row][sym]);
						
					}while(sym < entn);
					
				}while(row < entn);
				row = 0; count = 0; 

			do{
					row++; count++;
					sum[count] = 0;
					sym = 0;				
					do{
					sym++;
			sum[count] = sum[count] + arr[row][sym];				
					}while(sym < entn);
					}while(row < entn);
			
			count++;
			row = 0 ;sym = 0; sum[count] = 0;
			do{
				row++; sym++;
				sum[count] = sum[count] + arr[row][sym];
					
			}while(row < entn);
				sym = 0; count++; sum[count] = 0;
			do{
				sym++;
				sum[count] = sum[count] + arr[row][sym];	
				row = row - 1; 
			}while(row > 0);

			do{
				 					
				if (sum[1] == sum[count]){
					rcount = rcount + 1;
				} else{
					rcount = rcount + 0;
				      }
				count = count - 1;	
			}while(count > 0);

	
			if(rcount == entn + 2){
						printf("Magic\n");
			             }else{
						printf("No magic\n");
				             }	
			

	return 0;
}
			





			




				 			
