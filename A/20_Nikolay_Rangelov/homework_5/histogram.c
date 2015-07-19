#include<stdio.h>

int main()
{
    int i, j; // for for loops;
    int range;
    int length;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("Enter length: ");
    scanf("%d", &length);

    int input[length];

    printf("Enter array: ");

    for(i=0; i<length; i++) // Inputing the array;
    {
        scanf("%d", &input[i]);
    }

    printf("Histogram: \n");
    for(j=0; j<=range; j++)
    {
        printf("%d: ", j);
        for(i=0; i<length; i++) // Outputing the array;
        {
            if(j==input[i])
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
