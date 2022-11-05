#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE* fp; 
    char myChar1;
    
    fp = fopen("myFirstFile.txt", "r");

    if (fp != NULL)    
    {
        printf("The file is opened for reading!\n"); 
        myChar1 = fgetc(fp);
        printf("The first character that was read is: %c\n", myChar1);
        myChar1 = fgetc(fp);
        printf("The second character that was read is: %c\n", myChar1);

        fgetc(stdin); // getchar();

        fclose(fp);
    }  


    return 0;
}