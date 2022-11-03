#include <stdio.h>

#define SIZE 10

int main()
{
    int i, j;
    int foundDublicate=0;
    int nonUniqueCount=0;
    int arr[SIZE]={5, 7, 3, 4, 5, 6, 8, 9, 10, 3};    

    for(i=0; i<SIZE; i++)
    {
        foundDublicate=0;
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                foundDublicate = 1;   
                break;   
            }     
        }
        if(foundDublicate==1)
            break;
        else
            for(j=1; j<SIZE-1; j++)
            {
                if(arr[i] == arr[i+j])
                {
                    printf("Non Unique Value: %d\n", arr[i]);
                    nonUniqueCount++;
                    break;
                }
            }
    }
    printf("Total Non Unique Values: %d\n", nonUniqueCount);

    return 0;
}