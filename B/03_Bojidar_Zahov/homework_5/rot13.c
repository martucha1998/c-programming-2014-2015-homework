// Задача 2 - Rot 13
#include <stdio.h>

void CoderRot13()
{
	char text[150], codedtext[150];
	scanf("%s", text);

	int i;
	for (i = 0; text[i] != '\0'; ++i)
	{
		if ((text[i] >= 'a' && text[i] <= 'm') || (text[i] >= 'A' && text[i] <= 'M')) codedtext[i] = text[i] + 13;
		
		else if ((text[i] >= 'n' && text[i] <= 'z') || (text[i] >= 'N' && text[i] <= 'Z')) codedtext[i] = text[i] - 13;

		else codedtext[i] = text[i];
	}

	codedtext[i] = '\0';

	printf(" %s\n", codedtext);
}

int main()
{
	char mode;

	while (mode != 'q')
	{
		scanf("%c", &mode);

		if (mode == 'd' || mode == 'c')
		{
			CoderRot13();
		}

	}

	return 0;
}
