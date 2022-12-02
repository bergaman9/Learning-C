#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{   
    char myString[10];
    int count = 0;

    FILE* fp; 
    
    fp = fopen("myFirstFile5.txt", "r");

    if (fp != NULL)    
    {
        while (fgets(myString, 10, fp))
            printf("string #%d read: %s\n", ++count, myString);

        fclose(fp);
    }  

    return 0;
}