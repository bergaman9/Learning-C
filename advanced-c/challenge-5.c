#include <stdio.h>

int *primes(void)
{
    static int p[5] = { 2, 3, 5, 7, 9};
    return p;
}

int main()
{
    int x;
    int *array;

    array = primes();

    for(x=0; x<5; x++)
        printf("%2d\n", array[x]);

    return 0;
}