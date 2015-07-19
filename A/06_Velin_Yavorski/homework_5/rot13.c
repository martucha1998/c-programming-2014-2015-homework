#include<stdio.h>
void encode(char m[1000])
{
	int i,n;
	char c;
	for (i = 0; m[i] != '\0'; i++)
	{
		c = m[i];
		n = c;
		if (n > 96)
		{
			if (n > 109)
				m[i] = n - 13;
			else
				m[i] = n + 13;
		}
		else
		{
			if (n > 77)
				m[i] = n - 13;
			else
				m[i] = n + 13;
		}
		
	}
	printf("%s\n", m);
}
int main()
{
	
	char ch;
	char arr[1000];
	printf("Enter option (now and after the encoded or decoded text is shown): ");
	do{   
		
		scanf("%c", &ch);
		if (ch == 'c' || ch =='d')
		{
			scanf("%s", arr);
			encode(arr);
		}		
	} while (ch != 'q');
	return 0;
}
