#include<stdio.h>
#include<stdlib.h>

#define is_number(A) (A>='0'&&A<='9')
#define INIT_SIZE 100

#define Error(A) { printf(A); getchar(); return 1; }
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

int pop( struct stack_t *stack , int *err )
{
    if( stack->top < 0 )  { if(err!=NULL) *err = RET_ERR_STACK_IS_EMPTY; return -1; }
    if(err!=NULL) *err = RET_SUCCESS;
    return stack->e[ stack->top-- ];
}

int main()
{
    struct stack_t stack;
    init(&stack);
    int i,err,num,a,b,rez;
    char c;
    for(i=0;;i++)
    {
        scanf("%c",&c);
        if( c==10||c==13 ) break;
        if( is_number(c) )
        {
            for(num=0;is_number(c);i++) { num*=10; num+=c-'0'; scanf("%c",&c); }
            if( push(&stack,num) != RET_SUCCESS ) Error("Error: Can't Allocate Memory!\n");
        }
        if( c=='+'||c=='-'||c=='*'||c=='/' )
        {
            if( top(stack)<1 ) { printf("Syntax Error ( Not Enough Operands ) At %d\n!",i); getchar(); return 1; }
            b = pop(&stack,NULL);
            a = pop(&stack,NULL);
            if(c=='+') rez = a + b;
            else if(c=='-') rez = a - b;
            else if(c=='*') rez = a * b;
            else if(c=='/') rez = a / b;
            if( push(&stack,rez) != RET_SUCCESS ) Error("Error: Can't Allocate Memory!\n");
        }
        else if( c!=' ' ) { printf("Syntax Error ( Unknown Operand ) At %d\n!",i); getchar(); return 1; }
    }
    printf("%d",pop(&stack,NULL));
    destroy(&stack);
    return 0;
}
