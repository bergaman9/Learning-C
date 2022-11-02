#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<15; i++)
    {
        printf("%d * %d is %d\n", num, i, num*i);
    }

    return 0;
}