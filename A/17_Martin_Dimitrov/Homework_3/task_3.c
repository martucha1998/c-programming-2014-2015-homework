#include <stdio.h>

int PrimeCheck(int number)
{
    int i = 1;
    while(i<=number)
    {
        if (number%i==0)
        {
            if(!((i==1) || (i==number)))
            {
                return 0;
            }
        }
        i++;
    }
    return 1;
}

int main()
{
    int firstNumber = 3;
    int secondNumber = 5;
    int i;
    int firstFull = 0;
    int secondFull = 0;
    int stopped = 5;
    int twin = 1;
    printf("(%d, %d)\n", firstNumber, secondNumber);
    for(twin=1; twin<=9; twin++)
    {
        i = stopped;
        while(i<=99999)
        {
            if((PrimeCheck(i)==1)&& (firstFull==0))
            {
                firstNumber = i;
                firstFull = 1;
            }
            else if ((PrimeCheck(i)==1)&&(firstFull==1))
            {
                secondNumber = i;
                secondFull = 1;
            }

            if((firstFull==1)&&(secondFull==1))
            {
                printf("(%d, %d)\n", firstNumber, secondNumber);
                firstFull = 0;
                secondFull = 0;
                stopped = secondNumber + 1;
                break;
            }
            i++;
        }
    }

    return 0;
}

