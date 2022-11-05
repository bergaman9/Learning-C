#include <stdio.h>
#include <stdlib.h>


int main()
{
    char desiredCharacter;
    char filename[20] = {0};
    int countAppearances=0;
    FILE* fp; 

    printf("Enter a desired character: ");
    scanf("%c", &desiredCharacter);

    printf("Enter a filename you want to test: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");

    if (fp != NULL)    
    {
        while(!feof(fp))
        {
            if(fgetc(fp) == desiredCharacter)
                countAppearances++;
        }

        printf("The total of '%c' in the file is: %d\n", desiredCharacter, countAppearances);
        fclose(fp);
    }  

    return 0;
}