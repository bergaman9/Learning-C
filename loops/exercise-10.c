#include <stdio.h>

int main()
{
    int i, currentValue, oddSum = 0;
    int n;

    printf("Enter 'n' (the number of values in a sequence): ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &currentValue);
        if(currentValue % 2 == 1)
            oddSum += currentValue;
    }

    printf("Odd Sum = %d\n", oddSum);

    return 0;
}