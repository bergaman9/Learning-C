#include <stdio.h>

#define SIZE 5

int main()
{
    int i, j;
    int arr[SIZE];
    int reallySorted=0, sorted=0, notSorted=0;
    
    for(i=0; i<SIZE; i++)
    {
        printf("Enter %d. number: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(j=0; j<SIZE-1; j++)
    {
        if(arr[j] == arr[j+1])
            sorted = 1;
        
        if(arr[j] > arr[j+1])
            notSorted = 1;

        if(arr[j] < arr[j+1])
            reallySorted=1;
    }

    printf("%s", reallySorted==1?"REALLY SORTED" : sorted==1 ? "SORTED" : "NOT REALLY SORTED");
    
    return 0;
}