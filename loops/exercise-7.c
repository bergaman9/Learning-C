#include <stdio.h>

int main()
{
    int num, i, j, k, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);


    for(i=3; i<=num; i+=3)
    {
       sum+=i;
    }

    for(j=5; j<=num; j+=5)
    {
       sum+=j;
    }

    for(k=15; k<=num; k+=15)
    {
       sum-=k;
    }

    printf("Sum = %d", sum);

    return 0;
}