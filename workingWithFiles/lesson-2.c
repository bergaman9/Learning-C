#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE* fp; 
    
    fp = fopen("myFirstFile2.txt", "w");

    if (fp != NULL)    
    {
        fputc('H', fp); // "H" strings
        fputc('e', fp);
        fputc('y', fp);

        fclose(fp);
    }  

    putchar('a');

    return 0;
}