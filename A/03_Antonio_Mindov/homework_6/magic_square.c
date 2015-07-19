#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 1000;
int size;

int CheckIsMagic(int arr[size][size])
{
    int x,y;

    int sum = 0;

    for(x = 0; x<size; x++)
    {
        sum += arr[x][x];
    }

    int currSum = 0;

    for(x = size-1; x>=0; x--)
    {
        currSum += arr[x][x];
    }
    if(currSum!=sum)
    {
        return 0;
    }


    int secondCurrSum = 0;
    for(x = 0;x<size;x++)
    {
        currSum = 0;
        secondCurrSum = 0;

        for(y = 0;y<size;y++)
        {
            currSum += arr[x][y];
            secondCurrSum += arr[y][x];
        }

        if(currSum!=sum || secondCurrSum != sum)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    do
    {
        scanf("%d", &size);
    }while(size<0||size>MAX_SIZE);

    int square[size][size];
    int x,y;

    for(x = 0;x<size;x++)
    {
        for(y = 0;y<size;y++)
        {
            scanf("%d", &square[x][y]);
        }
    }

    if(CheckIsMagic(square))
    {
        printf("MAGIC\n");
    }
    else
    {
        printf("NO MAGIC\n");
    }

    return 0;
}
