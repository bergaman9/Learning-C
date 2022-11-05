#include <stdio.h>

int pellRecursive(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return 2 * pellRecursive(n-1) + pellRecursive(n-2);
}


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Pell Value at Index %d = %d \n", num, pellRecursive(num));

    return 0;
}