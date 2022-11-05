#include <stdio.h>

int findMax(int num)
{
    int maxSofar;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    if(num>1)
    {
        maxSofar = findMax(num-1);
        if(userInput > maxSofar)
            return userInput;
        else
            return maxSofar;
    }
}

int findMin(int num)
{
    int minSofar;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    if(num>1)
    {
        minSofar = findMin(num-1);
        if(userInput < minSofar)
            return userInput;
        else
            return minSofar;
    }
}

int main()
{
    printf("%d", findMin(5));

    return 0;
}