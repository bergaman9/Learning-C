#include <stdio.h>

int main()
{
    int number, firstDigit, remainder, middleDigit, lastDigit;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    firstDigit = number/100;
    remainder = number%100;
    middleDigit = remainder/10;
    lastDigit = remainder % 10;

    printf("The total sum of digits in %d is %d\n", number, firstDigit+middleDigit+lastDigit);    
    
    return 0;
}