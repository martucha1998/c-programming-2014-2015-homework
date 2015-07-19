#include <stdio.h>
int main() {
	int ts;
	ts = 20;
	
	while(ts<30000)
	{
		ts++;
		int moda = ts % 21;
		int chet = ts % 2;		
		if(moda == 0)
		{
			if(chet != 0)
			{
				printf("%d\n",ts);
			}
		}
	}
	return 0;
}
