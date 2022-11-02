#include <stdio.h>

int sumOfDivisors(int num)
{
    int divisor, result=0;
    for(divisor=1; divisor<num; divisor++)
    {
        if((num % divisor) == 0)
        {
            result+=divisor;
        }
    }

    return result;
}

int isPerfect(int num)
{
    if(num<=1)
        return 0;
    if(num == sumOfDivisors(num))
        return 1;
    return 0;
}


int main()
{
    int result = isPerfect(6);
    printf("%s", result == 1 ? "PERFECT" : "NOT PERFECT");
    return 0;
}