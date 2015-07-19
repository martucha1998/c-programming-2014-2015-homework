#include <stdio.h>

int main()
{
    printf("Enter range: ");
    int range, length;
    scanf("%d", &range);
    printf("Enter length: ");
    scanf("%d", &length);
    int array[length];
    int i, j, count;
    printf("Enter array: ");
    for(i = 0; i < 12; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Histogram: \n");
    for(i = 0; i <= range; i++)
    {
        count = 0;
        for(j = 0; j < 12; j++)
        {
            if(array[j] == i)
            {
                count++;
            }
        }
        printf("%d: ", i);
        for(j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
