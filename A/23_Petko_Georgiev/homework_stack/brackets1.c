#include<stdio.h>
int main()
{
	int i,q;
	char c;
	for(i=0,q=0;;i++)
	{
		scanf("%c",&c);
		if(c==10||c==13) break;
		if( c != '{' && c != '}' ) { printf("Babinata Ti: Unknown Symbol At %d!\n",i); getchar(); return 1; }
		if( c=='{' ) q++;
		if( c=='}' ) q--;
		if(q<0) break;
	}
	if(q==0) printf("Yes\n");
	else printf("No\n");
	return 0;
}