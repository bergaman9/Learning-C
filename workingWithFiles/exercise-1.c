#include <stdio.h>
#include <stdlib.h>


int main()
{
    char myChar;
    int countOfCharacters=0;
    FILE* fp; 
    
    fp = fopen("exerciseFile.txt", "r");

    if (fp != NULL)    
    {

        while((myChar = fgetc(fp)) != EOF)
        {
            printf("%c", myChar);
            countOfCharacters++;
        }
        printf("\n");
        printf("The total of characters in the file is: %d\n", countOfCharacters);
        fclose(fp);
    }  

    return 0;
}