#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=2; i<=num; i+=2)
    {
        printf("%4d", i);
    }

    return 0;
}