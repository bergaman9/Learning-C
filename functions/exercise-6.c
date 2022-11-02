#include <stdio.h>

char toLower(char letter)
{
    if(letter>='A' && letter <='Z')
    {
        return letter+32;
    }
    else
        return -1;
}

char toUpper(char letter)
{
    if(letter>='a' && letter <='z')
    {
        return letter-32;
    }
    else
        return -1;
}


int main()
{
    printf("%c\n", toLower('K'));
    printf("%c\n", toUpper('a'));

    return 0;
}