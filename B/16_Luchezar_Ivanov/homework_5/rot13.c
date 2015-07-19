#include <stdio.h>
void rot13()
{
char text[1000], encrtxt[1000];
scanf("%s", text);
int i;
for(i=0;text[i]!='\0';i++)
	{
	if((text[i]>=65 && text[i]<=77) || (text[i]>=97 && text[i]<=109))
		encrtxt[i]=text[i]+13;
	else if((text[i]>=78 && text[i]<=90) || (text[i]>=109 && text[i]<=122))
		encrtxt[i]=text[i]-13;
	else
		encrtxt[i]=text[i];
	}
encrtxt[i+1]='\0';
printf("%s\n", encrtxt);
}
int main()
{
char c;
c='a';
while(c!='q')
	{
	scanf("%c",&c);
	if(c=='c' || c=='d')
		rot13();
	}
return 0;
}
