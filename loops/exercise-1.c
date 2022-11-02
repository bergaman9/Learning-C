#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%4d", i);
    }

    printf("\n");

    for(i=num; i>0; i--)
    {
        printf("%4d", i);
    }


    return 0;
}