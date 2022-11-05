#include <stdio.h>
#include <stdlib.h>


int main()
{
    char myChar;
    int i;
    FILE* fp; 
    
    fp = fopen("exerciseFile.txt", "w");

    if (fp != NULL)    
    {
        for(i=0; i<=10; i++)
        {
            fprintf(fp, "%d %d\n", i, i*i);
        }
        
        fclose(fp);
    }  

    return 0;
}