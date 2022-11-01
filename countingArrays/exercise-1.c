#include <stdio.h>

int main()
{
    char arr[8] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int countArr[26] = {0};
    int maxValue, indexMax;
    int i, j;

    printf("%c\n", arr[0]);

    for(i=0; i<8; i++)
    {
        countArr[arr[i]-97]++;
    }

    maxValue = countArr[0];

    for(j=0; j<26; j++)
    {
        printf("%d", countArr[j]);
        if(maxValue < countArr[j])
        {
            maxValue = countArr[j];
            indexMax = j+97;
        }
    }

    printf("\nThe letter %c appeared most of the times. Total of %d appearances.", indexMax, maxValue);


    return 0;
}