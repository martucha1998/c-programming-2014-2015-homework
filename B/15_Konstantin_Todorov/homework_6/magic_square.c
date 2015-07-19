#include <stdio.h>
int main()
{
	int huchuc,i,j,size;
	int square[size][size];
	printf("vuvedi razmer na kvadrata\n");
	scanf("%d", &size);
	printf("\nVuvedete 4islata na kvadrata:\n");
	for(i= 0; i < size; i++)
		{
			for(j = 0; j < size; j++)
				{
					scanf("%d", &square[i][j]);
				}
		}
	huchuc=Suming(size);
	if(huchuc)
		{
          printf("\nMagic\n");

          }
     else
         printf("\nNo Magic\n");
return 0;
         }

int Suming(int n)
{
    int i,j,size,M,sum=0;
    int square[size][size];
    M=(int)(( size * ( size * size + 1)))/2; 
    for(i=0;i<n;i++)
   {
        sum=0;
        for(j=0;j<n;j++)
       {
             sum=sum+square[i][j];
       }
        if(sum!=M)
             return 0;
   }
    for(j=0;j<n;j++)
   {
          sum=0;
          for(i=0;i<n;i++)
         {
                 sum=sum+square[i][j];
         }
         if(sum!=M)
               return 0;
    }
     sum=0;
     for(i=0;i<n;i++)
     {
           sum=sum+square[i][i];
     }
      if(sum!=M)
            return 0;
     for(i=0;i<n;i++)
     {
           sum=0;
           for(j=n-1;j>=0;j--)
          {
                sum=sum+square[i][j];
         }
          if(sum!=M)
          return 0;
     }
      return 1;
}

