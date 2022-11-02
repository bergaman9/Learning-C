#include <stdio.h>

int main()
{
    int size, num, previousNumber=0, i, isAscending=1, sequenceSize;

    
    printf("Enter a size: ");
    scanf("%d", &size);

    while(size<=0)
    {
        printf("Wait a minute.. Try again please! \n");
        return 0;
    }

    for(i=1; i<=size; i++)
    {
       printf("Enter %d. number: ", i);
       scanf("%d", &num);

       if(previousNumber>num)
       {
        isAscending = 0;
       }

       if(isAscending==1)
       {
        previousNumber=num;
       }
    }

    if(isAscending==1)
        printf("Very Ascending");
    else if (isAscending==0)  
        printf("NOT Very Ascending");

    return 0;
}