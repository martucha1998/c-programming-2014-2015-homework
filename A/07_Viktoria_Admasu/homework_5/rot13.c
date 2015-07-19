#include<stdio.h>
void rot13()
{
	int i;
	char a;
	char text[100];
	char text1[100];

	scanf ("%s", text);
	a = text[1];

	for (i = 0; text[i] != '\0'; i++)
	{
		if ((text[i] >= 'A' && text[i] <= 'M') || (text[i] >= 'a' && text[i] <= 'm')) text1[i] = text[i] + 13;
		else if ((text[i] >= 'N' && text[i] <= 'Z') || (text[i] >= 'n' && text[i] <= 'z')) text1[i] = text[i] - 13;
		else text1[i] = text[i];			
	}

	text1[i] = '\0';

	printf ("%s\n", text1);
}

int main()
{
	char a;
	char text[100];
	
	printf ("Enter option: ");
	scanf ("%c", &a);
			
	do
	{	
		if (a == 'c' || a =='d')
		{
			rot13();
		}
	} while (a != 'q');

	return 0;
}
