#include <stdio.h>

int main()
{
    char arr[8] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    int countArr[26] = {0};
    int maxValue, indexMax;
    int i, j;
    
    // Printing Decimal Value to Terminal
    // printf("%c %d", 'a', 'a');
    // printf("%c %d", 'A', 'A');

    for(i=0; i<8; i++)
    {
        countArr[arr[i]-65]++;
    }

    maxValue = countArr[0];

    for(j=0; j<26; j++)
    {
        printf("%d", countArr[j], countArr[j]);
        if(maxValue < countArr[j])
        {
            maxValue = countArr[j];
            indexMax = j+65;
        }
    }

    printf("\nThe letter %c appeared most of the times. Total of %d appearances.", indexMax, maxValue);

    return 0;
}