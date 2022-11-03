#include <stdio.h>

#define SIZE 4

int main()
{
    int arr[SIZE] = {1,2,2,1};
    int flag = 1;
    int i;

    for(i=0; i<=SIZE/2; i++)
    {
        if(arr[i] != arr[SIZE-1-i])
            flag = 0;
            break;
    }

    if(flag==1)
        printf("PALINDROM.");
    else if (flag==0)
        printf("NOT PALINDROM.");

    return 0;
}