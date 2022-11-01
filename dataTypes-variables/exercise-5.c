#include <stdio.h>

int main()
{
    int number, hundreds, remainder, tens, ones;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    hundreds = number / 100;
    remainder = number % 100;
    tens = remainder / 10;
    ones = remainder % 10;

    printf("Reversed number of %d is %d%d%d", number, ones, tens, hundreds);

    return 0;
}