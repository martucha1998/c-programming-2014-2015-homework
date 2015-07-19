#include <stdio.h>

void Encrypt()
{
	char text[1000], encryptedText[1000];
	scanf("%s", text);

	int i;
	for (i = 0; text[i] != '\0'; ++i)
	{
		if ((text[i] >= 65 && text[i] <= 77) || (text[i] >= 97 && text[i] <= 109)) 
		{
			encryptedText[i] = text[i] + 13;
		}
		else if ((text[i] >= 78 && text[i] <= 90) || (text[i] >= 109 && text[i] <= 122))
		{
			encryptedText[i] = text[i] - 13;
		}
		else
		{
			encryptedText[i] = text[i];
		}
	}

	encryptedText[i] = '\0';

	printf(" %s\n", encryptedText);
}

int main()
{
	char input;

	do
	{
		scanf("%c", &input);

		if (input == 'c' || input == 'd')
		{
			Encrypt();
		}

	} while (input != 'q');

	return 0;
}