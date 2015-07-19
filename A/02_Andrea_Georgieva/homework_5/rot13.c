#include <stdio.h>
	void code ()
	 {
		int a,b;
		char c[100] ;
		getchar();
		a = 0;
		b = 1;
		printf("Enter the word that you want to code or decode :");
		while (b == 1) 
		{
			scanf("%c",&c[a]);
			if (c[a] == '\n') 
			{
				break;
			}
			a++;
		}
		a = 0;
		b = 1;
		while (b == 1)
		{
			if (c[a] == '\n') 
			{
				break;
			}
			if (c[a] >= 'a' && c[a] <= 'z')
		 	{
				if (c[a] < 'm') 
				{
					c[a] += 13;
				}
				else 
				{
					c[a] -= 13;
				}
			}
			if (c[a] >= 'A' && c[a] <= 'Z') 
			{
				if (c[a] < 'M') 
				{
					c[a] += 13;
				}
				else
				{
					c[a] -= 13;
				}
			}
			a++;
		}
		a = 0;
		while (b == 1) 
		{
			if (c[a] == '\n')
			{
				break;
			}
			printf("%c", c[a]);
			a++;
		}
		printf("\n");
	}
	int main () 
	{
		int b = 1;
		char d;
		printf("Enter option(c for code,d for decode and q for quit): ");
		scanf("%c",&d);
		while (d != 'q')
		{
			if (d == 'c')
			{
				code();
			}
			if (d == 'd') 
			{
				code();
			}
			printf("\nEnter option(c for code,d for decode and q for quit): ");
			scanf("%c",&d);
		}
		return 0;
	}

