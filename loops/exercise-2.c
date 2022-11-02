#include <stdio.h>

int main()
{
    int num, i, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        result += i;
    }

    printf("The sum of all the integers from 1 to %d is %d", num, result);

    return 0;
}