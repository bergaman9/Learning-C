#include <stdio.h>

#define SIZE 4
#define N 2

int main()
{
    int i, j, k, temp;
    int arr[SIZE]={5,4,7,3};
    
    for(j=0; j<N; j++)
    {
        temp = arr[SIZE-1];
        for(i=SIZE-1; i>0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0]= temp;
    }

    for(k=0; k<SIZE; k++)
    {
        printf("%d", arr[k]);
    }

    return 0;
}