#include <stdio.h>

#define SIZE 10

int main()
{
    int i, j;
    int foundDublicate=0;
    int uniqueCount=0;
    int arr[SIZE]={5, 7, 3, 4, 5, 6, 8, 9, 10, 3};    
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(i==j)
                continue;
            if(arr[i] == arr[j])
                foundDublicate = 1;       
        }
        if(foundDublicate!=1)
        {
            printf("Unique Value: %d\n", arr[i]);
            uniqueCount++;
        }
        foundDublicate=0;
    }
    printf("Total Unique Nums: %d\n", uniqueCount);

    return 0;
}