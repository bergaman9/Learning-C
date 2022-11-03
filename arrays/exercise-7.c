#include <stdio.h>

#define SIZE 4

int main()
{
    int i, j, temp;
    int arr[SIZE]={5,4,7,3};

    temp = arr[0];
    for(i=1; i<SIZE; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[SIZE-1] = temp;

    for(j=0; j<SIZE; j++)
    {
        printf("%d", arr[j]);
    }

    return 0;
}