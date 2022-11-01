#include <stdio.h>

#define SIZE 8

int main()
{
    int arr[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
    int countArr[6] = {0};
    int i, j;

    for(i=0; i<SIZE; i++)
    {
        countArr[arr[i]]++;
    }

    printf("0 = %d, 1 = %d, 2 = %d, 3 = %d, 4 = %d, 5 = %d", countArr[0], countArr[1], countArr[2], countArr[3], countArr[4], countArr[5]);

    return 0;
}