#include <stdio.h>

int sumOfDivisors(int num)
{
    int divisor, result=0;

    for(divisor=1; divisor<num; divisor++)
    {
        if(num % divisor == 0)
        {
            result+=divisor;
        }
    }

    return result;
}


int main()
{

    printf("The sum of its divisors is %d", sumOfDivisors(6));
    return 0;
}