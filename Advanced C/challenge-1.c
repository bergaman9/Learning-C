#include <stdio.h>

int main()
{
    float value;

    printf("Enter a value: ");
    scanf("%f", &value);

    printf("Value = %.1f", (value*5)/3);
    
    return 0;
}