#include <stdio.h>
#include <stdlib.h>

int sumOfArray(int *pArr, int size)
{
    int i, sum=0;

    for(i=0; i<size; i++)
    {
        sum = sum + pArr[i]; 
    }

    return sum;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("The result sum = %d\n", sumOfArray(arr, 5));

    return 0;
}