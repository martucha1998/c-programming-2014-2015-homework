#include<stdio.h>
void encode (char m[1000])
{
	int j, n;
	char c;
	for (j = 0; m[j] != '\0'; j++)
	{
		c = m[j];
		n = c;
		if (n > 96)
		{
			if (n > 109)
			m[j] = n - 13;
			else 
			m[j] = n + 13;
		}
		else
		{
			if (n > 77)
			m[j] = n - 13;
			else 
			m[j] = n + 13;
		}
	}
	printf ("%s\n", m);
}
int main ()
{	
	
	char ch;
	char array[1000];
	printf ("Enter option: ");
	do 
	{
		scanf ("%c", &ch);
		if (ch == 'c' || ch == 'd')
		{
			scanf("%s", array);
			encode (array);
		}
	} while (ch != 'q');

return 0;
}

