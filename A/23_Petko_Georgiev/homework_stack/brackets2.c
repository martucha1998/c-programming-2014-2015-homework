#include<stdio.h>
#include<stdlib.h>

#define INIT_SIZE 100

#define top(A) A.top

typedef enum{ RET_SUCCESS=0 , RET_ERR_CANT_ALLOC_MEMORY , RET_ERR_STACK_IS_EMPTY } error_code;

struct stack_t
{
    int *e;
    int top,SZ;
};

int init( struct stack_t *stack )
{
    stack->SZ=INIT_SIZE;
    stack->top=-1;
    stack->e = (int*)malloc(sizeof(int)*INIT_SIZE);
    if(!stack->e) return RET_ERR_CANT_ALLOC_MEMORY; //fail
    return RET_SUCCESS;
}

void destroy( struct stack_t *stack )
{
    stack->SZ=0;
    stack->top=-1;
    free(stack->e);
}

int push( struct stack_t *stack , int a )
{
    if(stack->top+1==stack->SZ)
    {
        int i;
        stack->SZ*=2;
        int *new_p = (int*)malloc(sizeof(int)*stack->SZ);
        if(new_p==NULL) return RET_ERR_CANT_ALLOC_MEMORY; //failed
        for(i=0;i<=stack->top;i++) new_p[i]=stack->e[i];
        free(stack->e);
        stack->e = new_p;
    }
    stack->e[++stack->top] = a;
    return RET_SUCCESS;
}

int pop( struct stack_t *stack )
{
    if( stack->top < 0 ) return -1;
    return stack->e[ stack->top-- ];
}

int main()
{
	struct stack_t last_op;
	init(&last_op);
	int i,q[3]={0,0,0},err=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%c",&c);
		if( c=='{' || c=='(' || c=='[' ) push(&last_op,c);
		if(c==10||c==13) break;
		else if( c=='{' ) q[0]++;
		else if( c=='(' ) q[1]++;
		else if( c=='[' ) q[2]++;
		else if( c=='}' ) { q[0]--; if(pop(&last_op)!='{') {err=1; break;} }
		else if( c==')' ) { q[1]--; if(pop(&last_op)!='(') {err=2; break;} }
		else if( c==']' ) { q[2]--; if(pop(&last_op)!='[') {err=3; break;} }
		else { printf("Babinata Ti: Unknown Symbol At %d!\n",i); getchar(); return 1; }
		if(q[0]<0||q[1]<0||q[2]<0) break;
	}
	if(q[0]==0&&q[1]==0&&q[2]==0&&!err) printf("Yes\n");
	else printf("No\n");
	destroy(&last_op);
	return 0;
}