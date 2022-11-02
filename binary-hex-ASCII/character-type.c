#include <stdio.h>

int main()
{
    char character;

    printf("Write a character: ");
    scanf("%c", &character);

    if(character >= 97 && character <= 122)
        printf("%c is a lowercase letter.", character);
    else if(character >= 65 && character <= 90)
        printf("%c is a uppercase letter.", character);
    else if(character >= 48 && character <= 57)
        printf("%c is a digit.", character);
    else
        printf("%c is not a letter or digit.");

    return 0;
}