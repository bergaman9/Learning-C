#include <stdio.h>
#include <stdlib.h>


int main()
{
    char myChar;
    int countOfLines=1;
    FILE* fp; 
    
    fp = fopen("exerciseFile.txt", "r");

    if (fp != NULL)    
    {

        while((myChar = fgetc(fp)) != EOF)
        {
            if(myChar == '\n')
                countOfLines++;
        }
        printf("The total of lines in the file is: %d\n", countOfLines);
        fclose(fp);
    }  

    return 0;
}