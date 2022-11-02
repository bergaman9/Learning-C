#include <stdio.h>

int main()
{
    int i, j, k;
    int blankSpaces;
    int num;
    int currentValue = 1;

    printf("Insert 'num' (number of rows in pyramid): ");
    scanf("%d", &num);

    blankSpaces=num-1;

    for(i=1; i<=num; i++)
    {
        for(k=blankSpaces; k>=1; k--){
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d ", currentValue);
            currentValue+=1;
        }

        printf("\n");
        blankSpaces--;
    }

    return 0;
}