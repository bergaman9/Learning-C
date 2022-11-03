#include <stdio.h>

#define SIZE 4
#define N 2

int main()
{
    int i, j, k, temp;
    int arr[SIZE]={5,4,7,3};
    
    for(j=0; j<N; j++)
    {
        temp = arr[0];
        for(i=1; i<SIZE; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[SIZE-1]=temp;
    }

    for(k=0; k<SIZE; k++)
    {
        printf("%d", arr[k]);
    }

    return 0;
}