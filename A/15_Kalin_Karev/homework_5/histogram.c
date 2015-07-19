#include<stdio.h>
int main()
{
    int i, e;
    int range;
    int length;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("Enter length: ");
    scanf("%d", &length);

    int input[length];

    printf("Enter array: ");

    for(i=0; i<length; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("Histogram: \n");
    for(e=0; e<=range; e++)
    {
        printf("%d: ", e);
        for(i=0; i<length; i++)
        {
            if(e==input[i])
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

