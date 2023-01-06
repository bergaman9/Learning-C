#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number/100 < 10 && number/100 > 0)
        printf("triple-digit");
    else if (number/10 < 10 && number/10 > 0)
        printf("double-digit");
    else
        printf("neither double/triple");

    return 0;
}