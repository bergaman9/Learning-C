#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Number = %.1f", (float)x);
    
    return 0;
}