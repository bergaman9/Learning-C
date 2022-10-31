#include <stdio.h>

#define SIZE 20

int main()
{
    int arr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    int countArr[10] = {0};
    int maxValue;
    int indexMax;
    int i, j;

    for(i=0; i<SIZE; i++)
    {
        countArr[arr[i]]++;
    }

    maxValue = countArr[0];

    for(j=0; j<10; j++)
    {
        if (maxValue < countArr[j])
            maxValue=countArr[j];
            indexMax = j;
    }

    printf("#%d Max Value = %d", indexMax, maxValue);

    return 0;
}