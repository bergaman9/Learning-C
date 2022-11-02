#include <stdio.h>

int main()
{
    int currentDigit;
    int num;
    int evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0)
    {
        currentDigit = num % 10;
        if(currentDigit % 2 == 0)
            evenSum += currentDigit;
        else
            oddSum += currentDigit;
        num = num / 10;
    }

    printf("Even Digit Sum - Odd Digit Sum = %d\n", evenSum - oddSum);

    return 0;
}