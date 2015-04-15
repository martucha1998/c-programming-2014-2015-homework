#include <stdio.h>
#include <stdlib.h>

struct stack_t {
    int top_;
    int size_;
    int *data_;
};

void init(struct stack_t*);
void release(struct stack_t*);
void push(struct stack_t*, int value);
int pop(struct stack_t*);
int is_full(struct stack_t);
int is_empty(struct stack_t);
int peek(struct stack_t);

void add();
void multiply();
void subtract();
void divide();

void init(struct stack_t* st)
{
    st -> top_ = 0;
    st -> size_ = 5;
    st -> data_ = (int*) malloc(st -> size_ * sizeof(int));
}

void release(struct stack_t* st)
{
    free(st -> data_);
    st -> top_ = 0;
    st -> size_ = 0;
}

int is_full(struct stack_t st)
{
    return st.top_ == st.size_;
}

int is_empty(struct stack_t st)
{
    return st.top_ == 0 ? 0 : -1;
}

void push(struct stack_t* st, int value)
{
    st -> data_[st -> top_++] = value;
}

int pop(struct stack_t* st)
{
    return st -> data_[--st -> top_];
}

int peek(struct stack_t st)
{
    return st.data_[st.top_ - 1];
}

int main()
{
    char input[15000];
    struct stack_t stack;
    init(&stack);

    printf("Enter expression: ");
    scanf("%s", input);

    int j = 0;
    int size;
    while(input[j] != '\0')
    {
        j++;
    }
    size = j;
    //TODO

    release(&stack);

    return 0;
}
