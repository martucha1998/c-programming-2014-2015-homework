#include <stdio.h>

	int main()
{
		int entn,count;
		float cordinates[2],bid[entn][2],wei,deltx,delty;
			
			scanf("%d", &entn);
		
			scanf("%f %f", &cordinates[0], &cordinates[1]);
		
			for (count = 0; count < entn; count++)
			{
			scanf("%f %f", &bid[count][0], &bid[count][1]);
			}

			wei = 1;
			for (count = 0; count < entn; count++)
			{
				deltx = bid[count][0] - cordinates[0];
				delty = bid[count][1] - cordinates[1];
				deltx = deltx + deltx/wei;
				delty = delty + delty/wei;

				printf("%0.2f %0.2f\n", deltx, delty);

				cordinates[0] = cordinates[0] + deltx;
				cordinates[1] = cordinates[1] + delty;
				wei = wei * 2;
			}	
	
			printf("%0.2f %0.2f\n", cordinates[0], cordinates[1]);	
	return 0;	
}

