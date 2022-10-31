#include <stdio.h>

#define SIZE 8

int main()
{
    int arr[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};
    int countArr[6] = {0};
    int maxValue, indexMax;
    int i, j;

    // 0-1-2-3-4-5 if i=0 then the index of 7 will be 7-5=2
    for(i=0; i<SIZE; i++)
    {
        countArr[arr[i]-5]++;
    }

    maxValue=countArr[0];

    for(j=0; j<6; j++)
    {
        if(maxValue < countArr[j])
        {
            maxValue=countArr[j];
            indexMax=j+5;
        }
    }

    printf("The value of %d appeared most of the times. Total of %d appearances.", indexMax, maxValue);
    

    return 0;
}