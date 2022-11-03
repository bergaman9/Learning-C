#include <stdio.h>

#define SIZE 3

int main()
{
    int date[SIZE]={1, 2, 2000};
    int date2[SIZE];
    int i;

    for(i=0; i<SIZE; i++)
    {
        date2[i] = date[i];
    }

    
    for(i=0; i<SIZE; i++)
    {
        printf("original_date[%d] = %d\n", i, date[i]);
        printf("copied_date[%d] = %d\n", i, date2[i]);
    }
    

    return 0;
}