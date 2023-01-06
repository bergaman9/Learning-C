#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num ;
    
    FILE* fp; 
    
    fp = fopen("myFirstFile3.txt", "r");

    if (fp != NULL)    
    {
        fprintf(fp, "%d", num);
        fscanf(fp, "%d", &num);
        printf("num from file = %d\n", num);
        fclose(fp);
    }  

    return 0;
}