#include <stdio.h>

int findFactorial(int num)
{
    int i, result=1;

    if(num<0)
        return -1;

    for(i=1; i<=num; i++)
    {
        result *= i;
    }

    return result;
}


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d", num, findFactorial(num));

    return 0;
}