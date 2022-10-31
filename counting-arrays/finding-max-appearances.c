#include <stdio.h>

#define SIZE 20

int main()
{
    int arr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    int countArr[10] = {0};
    int maxValue;
    int indexMax;
    int i, j, k;

    for(i=0; i<SIZE; i++)
    {
        countArr[arr[i]]++;
    }

    // which values stored in countArr?
    for(j=0; j<10; j++)
    {
        printf("%d", countArr[j]);
    }

    // I assume first value of countArr is the most repetitive value.
    maxValue = countArr[0];

    printf("\n%d\n", maxValue);

    for(j=0; j<10; j++)
    {
        if (maxValue < countArr[j])
        {
            maxValue=countArr[j];
            // Index of max number equals itself.
            indexMax = j;
        }
    }

    printf("Mod=%d, Repeat Number=%d", indexMax, maxValue);

    return 0;
}