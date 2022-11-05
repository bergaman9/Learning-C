#include <stdio.h>

void printOneToN(int n)
{
    if(n >= 1)
    {
        printOneToN(n-1);
        printf("%d", n);
    }
}


void printNToOne(int n)
{
    if(n >= 1)
    {
        printf("%d", n);
        printOneToN(n-1);
    }
}


int main()
{
    printOneToN(4);
    printf("\n");
    printNToOne(4);
    return 0;
}