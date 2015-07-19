#include<stdio.h>

int main()
{
    int i = 0;
    for(i = 0;i<=30000;i++)
    {
        if((i%2==1)&&(i%3==0)&&(i%7==0))
        {
            printf("%d\n",i);
        }
    }
    return 0; 
}
