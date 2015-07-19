#include <stdio.h>

int main()
{
	char opt, txt[1000], txtt[1000];
	int i, n;
	printf("Enter an option (c - coding; d - decoding; q)");
	scanf("%c", &opt);
	while (opt == 'c')
	{
		printf("Enter your text for coding:\n");
		scanf("%s", &txt[i]);
		for (i = 0; txt[i] != '\0'; i++)
		{
			int num = txt[i];
			if ((num>64 && num<78)||(num>96 && num<110))
			num = num + 13;
			else if ((num>=78 && num<=90)||(num>=110 && num<=122))
			num = num - 13;
			txt[i] = num;
		}
		printf("%s", txt);
		printf("\n");
		break;
	}
	while (opt == 'd')
	{
		printf("Enter your text for decoding:\n");
		scanf("%s", &txtt[n]);
		for (n = 0; txtt[n] != '\0'; n++)
		{
			int numz = txtt[n];
			if ((numz>64 && numz<78)||(numz>96 && numz<110))
			numz = numz + 13;
			else if ((numz>=78 && numz<=90)||(numz>=110 && numz<=122))
			numz = numz - 13;
			txtt[n] = numz;
		}
		printf("%s", txtt);
		printf("\n");
		break;
	}
	if (opt == 'q')
	return 0;
}
