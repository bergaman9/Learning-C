#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a number to find square root of it: ");
    scanf("%d", &num);

    printf("The root of %d is %f", num, (double)sqrt(num));

    return 0;
}