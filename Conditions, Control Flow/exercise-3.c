#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number<0)
        printf("The absolute value of %d is |%d|", number, number*-1);
    else
        printf("The absolute value of %d is |%d|", number, number);

    return 0;
}