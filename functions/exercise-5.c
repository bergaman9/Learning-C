#include <stdio.h>

long long nineNumber(int length)
{
    int i;
    long long num = 0;
    for(i=0; i<length; i++)
    {
        num = num * 10 + 9;
    }
    return num;
}


long long onetonine(int length)
{
    int i;
    long long num = 0;
    
    if (length<=9)
    {
        for(i=0; i<length; i++)
        {
            num = num * 10 + i + 1;
        }
    } 
    else
    {
        num = nineNumber(length);
    }
    
    return num;
}


int main()
{
    int lengthSeq;

    printf("Please enter a length for the n-th sequence: ");
    scanf("%d", &lengthSeq);

    printf("Result = %lli \n", onetonine(lengthSeq));

    return 0;
}