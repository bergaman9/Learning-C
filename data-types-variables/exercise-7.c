#include <stdio.h>
#include <math.h>

int main()
{
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("x^2 is %.0f\n", pow(number, 2));
    printf("x^4 is %.0f\n", pow(number, 4));
    printf("x^6 is %.0f\n", pow(number, 6));
    printf("x^8 is %.0f\n", pow(number, 8));

    return 0;
}
