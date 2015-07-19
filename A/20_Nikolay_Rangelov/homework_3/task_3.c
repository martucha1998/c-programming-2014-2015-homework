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
    int twin = 1;
    while(twin<=10)
    {
        if( (PrimeCheck(firstNumber)==1) && (PrimeCheck(secondNumber)==1) && (secondNumber-firstNumber==2))
        {
            printf("(%d, %d)\n", firstNumber, secondNumber);
            twin++;
        }
        firstNumber++;
        secondNumber++;

    }
    return 0;
}

