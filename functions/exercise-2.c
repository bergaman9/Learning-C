#include <stdio.h>

void maxDigit(int number)
{
    if (number>99 || number<10)
        printf("The number is not a 2-digits number! \n");
    else
    {
        if(number%10 > number/10)
            printf("Maximum digit in %d is: %d \n", number, number%10);
        else
            printf("Maximum digit in %d is: %d \n", number, number/10);
    }
}

int main()
{
    maxDigit(86);
    return 0;
}