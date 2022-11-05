#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, maxIndex=0;
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

    for(i=0; i<26; i++)
    {
        if (frequencyArray[maxIndex] < frequencyArray[i])
        {
            maxIndex = i;
        }
    }

    printf("The most apperances of lowercase letter in %s is %c and it appear %d times.", filename, maxIndex + 'a', frequencyArray[maxIndex]);

    return 0;
}