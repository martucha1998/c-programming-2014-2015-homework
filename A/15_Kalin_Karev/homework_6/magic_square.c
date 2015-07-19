#include <stdio.h>

int main()
{
    int sized = 0;
    scanf("%d", &sized);
    int matrix[sized] [sized];

    int row, column = 0;
    int sum, sum1, sum2;
    int flag1 = 0;
    for (row = 0; row < sized; row++)
    {
        for (column = 0; column < sized; column ++)
            scanf("%d", &matrix[row][column]);
    }
    sum = 0;
    for (row = 0; row < sized; row++)
    {
        for (column = 0; column < sized; column++)
        {
            if (row == column)
                sum = sum + matrix[row][column];
        }
    }
    for (row = 0; row < sized; row++)
    {
        sum2 = 0;
        for (column = 0; column < sized; column++)
        {
            sum2 = sum2 + matrix[column][row];
        }
        if (sum == sum2)
            flag1 = 1;
        else
        {
            flag1 = 0;
            break;
        }
    }
    if (flag1 ==1)
        printf("MAGIC");
    else
        printf("NO MAGIC");
    return 0;
}
