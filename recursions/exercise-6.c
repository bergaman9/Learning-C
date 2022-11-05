#include <stdio.h>

void printOneToNandViceVersa(int n)
{
    if(n==1)
        printf("%d", n);

    if(n>1)
    {
        printf("%d", n);
        printOneToNandViceVersa(n-1);
        printf("%d", n);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printOneToNandViceVersa(num);
}