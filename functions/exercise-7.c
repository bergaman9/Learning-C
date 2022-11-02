#include <stdio.h>

int charToInt(char char1, char char2, char char3)
{

    int hundreds, tens, units;
    int finalResult;

    if(char1 >= '0' && char1 <= '9')
        hundreds = char1 - '0';
    else
        return 0;

    if(char2 >= '0' && char2 <= '9')
        tens = char2 - '0';
    else
        return 0;

    if(char3 >= '0' && char3 <= '9')
        units = char3 - '0';
    else
        return 0;

    finalResult = hundreds * 100 + tens * 10 + units;

    return finalResult;    
}

int main()
{
    printf("%d", charToInt('2', '5', '5'));

}