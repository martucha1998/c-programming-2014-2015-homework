#include <stdio.h>

void IsItMagic(int square[999][999],int inp)
{
	int count, subcount;
	int magic = 1;
	
	for(count=0; count<inp; count++)
	{
		for(subcount=0; subcount<inp; subcount++)
		{
			scanf("%d", &square[count][subcount]);
			if (subcount == inp - 1)
				printf("\n");
		}
	}
	
	int sum_l_r = 0;
	int prevsum_l_r = 0;
	
	int sum_u_d = 0;
	int prevsum_u_d = 0;
	
	for(count=0; count<inp; count++) 
	{
	
		prevsum_l_r = sum_l_r;
		sum_l_r = 0;

		prevsum_u_d = sum_u_d;
		sum_u_d = 0;
	
	
		for(subcount=0; subcount<inp; subcount++)
		{
			sum_l_r = sum_l_r + square[count][subcount];
			sum_u_d = sum_u_d + square[subcount][count];
		}
	
		if(count == 0) 
		{
			prevsum_l_r = sum_l_r;
			prevsum_u_d = sum_u_d;
		}
	
		if(sum_l_r != prevsum_l_r || sum_u_d !=prevsum_u_d)
			magic = 0;
	
		subcount = 0;
		int sumdiag_l_r = 0;
		int sumdiag_r_l = 0;
	
		for(count = inp-1; count >= 0; count--) 
		{
			sumdiag_l_r = sumdiag_l_r + square[count][subcount];
			sumdiag_r_l = sumdiag_r_l + square[count][subcount];
			subcount = subcount + 1;
		}

		if(sumdiag_l_r != sum_u_d || sumdiag_r_l != sum_u_d)
			magic = 0;
	
		if(magic == 1)
		{
			printf("Magic! \n");
			break;
		}
		else
		{
			printf("No Magic! \n");
			break;
		}
	}
}
	
int main()
{
	int inp;
	do
	{
		scanf("%d", &inp);
		printf("\n");
	}
	while(inp<0 && inp > 999);
	
	int square[999][999];
	IsItMagic(square, inp);
	
	return 0;
}
