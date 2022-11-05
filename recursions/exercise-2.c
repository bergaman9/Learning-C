#include <stdio.h>
#include <stdlib.h>

int totalCharacters(char character)
{
    char inputUser;
    printf("Please enter a character: ");
    scanf("%c", &inputUser);
    getchar();

    if (inputUser == '$');
        return 0;

    if (inputUser == character)
        return 1 + totalCharacters(character);

    return totalCharacters(character);
}

int main()
{
    char letter='c';
    printf("%d", totalCharacters(letter));

    return 0;
}