#include <stdio.h>

#define SIZE 8

int main()
{
    int arr[SIZE] = { 0, 2, 0, 1, 0, 0, 2, 0 };
    int countArr[3] = { 0 };
    int i;

    for(i=0; i< SIZE; i++)
    {
        countArr[arr[i]]++;
    }

    for(i=0; i<3; i++)
    {
        printf("%d", countArr[i]);
    }

    return 0;
}