#include <stdio.h>

float lowerThanDigit(int number, int digit)
{
    int counter=0;
    int totalSum = 0;

    int constNum=number;

    if(number<0)
        number = number * (-1);

    while (number != 0)
    {
        if(number % 10 < digit)
        {
            counter++;
            totalSum += number % 10;
        }

        number/=10;
    }

    printf("Total Amount of Digits less than %d in %d is %d\n", digit, constNum, counter);
    return (float)totalSum / counter;
}

int main()
{
    printf("The average of those digits is %.2f", lowerThanDigit(13572, 3));

    return 0;
}