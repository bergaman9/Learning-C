#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{   
    FILE* fp; 

    puts("Hey man!");
    puts("This is Omer");
    
    fp = fopen("myFirstFile4.txt", "w");

    if (fp != NULL)    
    {
        fputs("Hey man", fp);
        fputs("This is Omer", fp);

        fclose(fp);
    }  

    return 0;
}