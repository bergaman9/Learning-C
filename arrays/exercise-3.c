#include <stdio.h>

#define SIZE 5

int main()
{
    int i;
    int arr[SIZE] = {1,2,3,4,5};
    int result=0;

    for(i=0; i<SIZE-1; i++)
    {
        if(result < arr[i] + arr[i+1])
            result = arr[i] + arr[i+1];
    }

    printf("%d", result);

    return 0;
}