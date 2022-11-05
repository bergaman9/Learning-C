#include <stdio.h>

int totalSmaller(int num)
{
    int inputUser;
    printf("Please enter a number: ");
    scanf("%d", &inputUser);
    if (inputUser == -1)
        return 0;
    if (inputUser < num)
        return 1 + totalSmaller(num);
    return totalSmaller(num);
}

int main()
{
    int num=4;
    printf("Total of the numbers you entered less than %d is %d", num, totalSmaller(4));

    return 0;
}