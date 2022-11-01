#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    if(num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0)
        printf("Divisible");
    else if(num1 % 3 == 0 && num2 % 3 == 0 && num3 % 3 == 0)
        printf("Divisible");
    else if(num1 % 4 == 0 && num2 % 4 == 0 && num3 % 4 == 0)
        printf("Divisible");
    else if(num1 % 5 == 0 && num2 % 5 == 0 && num3 % 5 == 0)
        printf("Divisible");
    else if(num1 % 6 == 0 && num2 % 6 == 0 && num3 % 6 == 0)
        printf("Divisible");
    else if(num1 % 7 == 0 && num2 % 7 == 0 && num3 % 7 == 0)
        printf("Divisible");
    else if(num1 % 8 == 0 && num2 % 8 == 0 && num3 % 8 == 0)
        printf("Divisible");
    else if(num1 % 9 == 0 && num2 % 9 == 0 && num3 % 9 == 0)
        printf("Divisible");
    else
        printf("Non-Divisible");

    return 0;
}