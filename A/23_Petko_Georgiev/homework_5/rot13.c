#include<stdio.h>

void ReadString(char *str)
{
	char c;
	int i=-1;
	do
	{
		i++;
		scanf("%c",&c);
		str[i]=c;
	}while(c!=10);
	str[i]=0;
}
void Encrypt(char *text)
{
	int i=0;
	while(text[i]!=0)
	{
		if((text[i]>='a'&&text[i]<='m') || (text[i]>='A'&&text[i]<='M')) text[i]+=13;
		else if((text[i]>='n'&&text[i]<='z') || (text[i]>='N'&&text[i]<='Z')) text[i]-=13;
		i++;
	}
}
int main()
{
	char Message[255],c;
	while(1)
	{
		printf("Enter option: ");
		scanf("%c",&c);
		if(c=='c'||c=='d')
		{
			scanf("%c",&c);
			if(c==' ')
			{
				ReadString(Message);
				Encrypt(Message);
				printf("%s\n",Message);
			}
		}
		else if(c=='q') return 0;
	}
}
