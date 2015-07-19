#include<stdio.h>

int if_square_is_magic(int size, int square[size][size])
{
    int row, column, magic = 1, i;
    int sum = 0;
    int new_sum = 0;


    for(column = 0; column < size; column++)
    {
        sum = sum + square[0][column];
    }

    for(row = 0; row < size; row++)
    {
        for(column = 0; column < size; column++)
        {
            new_sum = new_sum + square[row][column];
        }
        if(!(new_sum == sum))
        {
            magic = 0;
        }
        new_sum = 0;
    }

    new_sum = 0;

    for(column = 0; column < size; column++)
    {
        for(row = 0; row < size; row++)
        {
            new_sum = new_sum + square[row][column];
        }
        if(!(new_sum == sum))
        {
            magic = 0;
        }
        new_sum = 0;
    }

    new_sum = 0;
    for(i=0; i < size; i++)
    {
        new_sum = new_sum + square[i][i];
    }
    if(!(new_sum == sum))
    {
        magic = 0;
    }

    new_sum = 0;
    row = 0;
    column = size - 1;
    for(i=0; i < size; i++)
    {
        new_sum = new_sum + square[row][column];
        row++;
        column--;
    }
    if(!(new_sum == sum))
    {
        magic = 0;
    }

    return magic;

}

int main()
{
    int size, row, column;
    scanf("%d", &size);
    int square[size][size];

    for(row = 0; row < size; row++)
    {
        for(column = 0; column < size; column++)
        {
            scanf("%d", &square[row][column]);
        }
    }

    if(if_square_is_magic(size, square))
    {
        printf("MAGIC");
    }
    else
    {
        printf("NO MAGIC");
    }



    return 0;
}
