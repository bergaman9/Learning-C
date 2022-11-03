#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 4

int main()
{
    int i, j;
    int arr[SIZE]={-1, 2, 3, -6};
    int minSum = arr[0] + arr[1];
    int currentSum;

    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            currentSum = arr[i] + arr[j];
            if(abs(currentSum) < abs(minSum))
                minSum = currentSum;
        }      
    }

    printf("%d", minSum);

    return 0;
}