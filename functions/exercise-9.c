#include <stdio.h>
#include <math.h>

float derivative(float c, float x, float n)
{
    return c*n*pow(x, n-1);
}

int main()
{
    printf("%.2f", derivative(4, 4, 3));
    return 0;
}