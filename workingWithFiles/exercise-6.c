#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    char filename[20] = {0};
    char currentCharacter;
    int frequencyArray[26]={0};
    FILE* fp; 

    printf("Enter a filename you want to test: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");

    if (fp != NULL)    
    {
        while(!feof(fp))
        {
            currentCharacter = fgetc(fp);
            if(currentCharacter >= 'a' && currentCharacter <= 'z')
                frequencyArray[currentCharacter - 'a']++;
        }
        fclose(fp);
    }  

    printf("Total Appearances of Lowercase Letters in file '%s'", filename);

    for(i=0; i<26; i++)
    {
        printf("Letter '%c' appears %d times.\n", i+'a', frequencyArray[i]);
    }

    return 0;
}