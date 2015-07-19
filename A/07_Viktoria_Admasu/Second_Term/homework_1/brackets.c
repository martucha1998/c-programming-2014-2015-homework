#include<stdio.h>
#define MAX 100

int top=-1;
int stack[MAX];
int match(char a,char b);

int main()
{
	char exp[MAX];
	int valid;
	
	printf("Enter expression: ");
	gets(exp);
	valid=check(exp);
	
	if (valid==1) printf("Valid expression\n");
	else printf("Invalid expression\n");
}

int check(char exp[] )
{
	int i;
	char temp;
	
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')	push(exp[i]);
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
		{
			if(top==-1) 
			{
				printf("-1\n"); 
				return 0;
			}
			else
			{
				temp=pop();
				if(!match(temp, exp[i]))
				{
					printf("Unbalanced brackets are: ");
					printf("%c and %c\n",temp,exp[i]);
					return 0;
				}
			}
		}
	}

	if(top==-1)
	{
		printf("0\n");
		return 1;
	}
	else
	{
		printf("-1\n");
		return 0;
	}
}

int match(char a,char b)
{
	if(a=='[' && b==']') return 1;
	if(a=='{' && b=='}') return 1;
	if(a=='(' && b==')') return 1;
}


void push(char item)
{
	if(top==(MAX-1))
	{
		printf("Stack Overflow\n");
		return;
	}
	top=top+1;
	stack[top]=item;	
}

char pop()
{
	if(top==-1)
	{
	printf("Stack Underflow\n");
	exit(1);
	}
	return(stack[top--]);
}
