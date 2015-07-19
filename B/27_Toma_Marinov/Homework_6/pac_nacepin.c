#include <stdio.h>

int main()
{
	int jcan, count, subcount;
	float mv_x, mv_y, mass, sl_x, sl_y, x, y;
	float jcan_cord[999][999];
	
	scanf("%d", &jcan);	
	scanf("%f %f", &x, &y);
	mass = 1.0;

	for (count=0; count<jcan; count++)
	{
		scanf("%f %f", &jcan_cord[count][0], &jcan_cord[count][1]);
	}
		for (subcount=0; subcount<jcan; subcount++)
		{
			mv_x = jcan_cord[subcount][0] - x;
			mv_y = jcan_cord[subcount][1] - y;
			
			sl_x = mv_x / mass;
			sl_y = mv_y / mass;
			mass = mass * 2;			

			mv_x = mv_x + sl_x;
			mv_y = mv_y + sl_y;

			printf("%0.2f %0.2f \n", mv_x, mv_y);
			
			x = x + mv_x;
			y = y + mv_y;
		}
		printf("%0.2f %0.2f \n", x, y);

	return 0;
}
