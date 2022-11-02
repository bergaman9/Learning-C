#include <stdio.h>

int isEven(int num)
{
    if (num%2==0)
        return 1;
    return 0;
}

int isOdd(int num)
{
    if (isEven(num)!=1)
        return 1;
    return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", isOdd(num));

    return 0;
}