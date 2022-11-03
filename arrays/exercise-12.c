#include <stdio.h>

void printArr(int *ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d", ptr[i]);
    }
}

void resetElementToZero(int *ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        ptr[i] = 0;
    }
}

int main()
{
    int arr[3] = {1,3,10};
    resetElementToZero(arr, 3);
    printArr(arr, 3);

    return 0;
}