#include <stdio.h>

int main()
{
    int squareSize;
    scanf("%d", &squareSize);
    int square[squareSize][squareSize];
    int i, j;
    for(i = 0; i < squareSize; i++)
    {
        for(j = 0; j < squareSize; j++)
        {
            scanf("%d", &square[i][j]);
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for(i = 0; i < squareSize; i++)
    {
        sum1 += square[0][i];
    }
    //horizontal left
    for(i = 1; i < squareSize; i++)
    {
        sum2 = 0;
        for(j = 0; j < squareSize; j++)
        {
            sum2 += square[j][i];
        }
        if(sum2 != sum1)
        {
            printf("NO MAGIC");
            return;
        }
    }
    //vertical
    for(j = 0; j < squareSize; j++)
    {
        sum2 = 0;
        for(i = 0; i< squareSize; i++)
        {
            sum2 += square[j][i];
        }
        if(sum2 != sum1)
        {
            printf("NO MAGIC");
            return;
        }
    }
    //diagonal
    sum2 = 0;
    for(j = 0, i = 0; j < squareSize; j++, i++)
    {
        sum2 += square[i][j];
    }
    if(sum2 != sum1)
    {
        printf("NO MAGIC");
        return;
    }
    //diagonal
    sum2 = 0;
    for(i = 0, j = squareSize - 1; j >= 0; j--, i++)
    {
        sum2 += square[i][j];

    }
    if(sum2 != sum1)
    {
        printf("NO MAGIC");
        return;
    }
    printf("MAGIC");
    return;
    return 0;
}
