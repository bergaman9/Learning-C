#include <stdio.h>

int main()
{
    float data;

    printf("Enter a float type number: ");
    scanf("%f", &data);

    printf("The decimal part of the number is %.2f", data-(int)data);

    return 0;
}