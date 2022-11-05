#include <stdio.h>

int digitsSumEven(int n)
{   
    int resultSoFar;

    if (n<10)
        if(n%2 == 0)
            return 1;
        else
            return 0;
    resultSoFar = digitsSumEven(n/10);
    if (n % 10 % 2 == 0)
        if(resultSoFar == 1)
            return 1;
        else
            return 0;
    else
        if (resultSoFar == 1)
            return 0;
        else
            return 1;
}


int digitsSumEvenOptimized(int n)
{
    if(n<10)
        return n % 2 ? 0 : 1;
    return n % 10 % 2 ? !digitsSumEven(n/10) : digitsSumEven(n/10);
}


int digitsOddEven(int n)
{
    int resultSoFar;

    if (n<10)
        if(n%2 == 0)
            return 0;
        else
            return 1;
    resultSoFar = digitsOddEven(n/10);
    if (n % 10 % 2 == 0)
        if(resultSoFar == 1)
            return 1;
        else
            return 0;
    else
        if (resultSoFar == 1)
            return 0;
        else
            return 1;
}


int main()
{
    printf("%d", digitsSumEvenOptimized(543));
    printf("%d", digitsOddEven(543));


    return 0;
}