#include <stdio.h>

int magic(int *sqare, int *size);

int main()
{
	int sqr[99];
	int counter,size;
	printf("Enter square size");
	scanf("%d", &size);
	for(counter = 0;counter < (size*size); counter++)
	{
		printf("Enter element:\n");
		scanf("%d", &sqr[counter]);
	}
	switch (magic(sqr, &size))
	{
		case 0: printf("MAGIC\n");
			break;
		case 1: printf("NOT MAGIC columns\n");
			break;
		case 2: printf("NOT MAGIC rows\n");
			break;
		case 3: printf("NOT MAGIC diagonal 1\n");
			break;
		case 4: printf("NOT MAGIC diagonal 2\n");
			break; 
	}
	return 0;
}

int magic(int *square, int *size)
{
	int counterX, counterY, counter3, sum1 = 0, sum2 = 0;
	int mag;
	mag = (*size*(*size**size+1))/2;
	printf("marker0");
	for(counterY = 0; counterY < (*size**size); counterY += *size)
	{
		printf("marker1");
		for(counterX = counterY; counterX < *size; counterX++)
		{
			sum1 += square[counterX];
			if(counterX < *size)
			{
				for(counter3 = counterX; counter3 = (*size**size); counter3 += *size)
				{
					sum2 += square[counter3];
				}
				if(sum2 != mag)
				{

					return 1;
				}
				printf("marker2");
			}
		}
		if(sum1 != mag)
		{
			return 2;
		}
		printf("marker3");
	}
	sum1 = 0;sum2 = 0;
	for(counter3 = 0; counter3 < (*size**size);counter3 += (*size + 1))
	{
		sum1 += square[counter3];
	}
	if(sum1 != mag)
	{
		return 3;
	}
	printf("marker4");
	for(counter3 = *size; counter3 < (*size**size); counter3 += (*size - 1))
	{
		sum2 += square[counter3]; 
	}
	if(sum2 != mag)
	{ 
		return 4;
	}
	printf("marker5");
	return 0;
}