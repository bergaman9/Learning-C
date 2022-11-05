#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, power;
    int i;
    FILE* fp; 
    
    fp = fopen("exerciseFile.txt", "r");

    if (fp != NULL)    
    {
        for (i=0; i<=10; i++)
        {
            fscanf(fp, "%d%d", &num, &power);
            printf("%d %d\n", num, power);
        }
        
        fclose(fp);
    }  

    return 0;
}