#include <stdio.h>

int totalEvenNums()
{
    int inputUser;

    printf("Please enter a number: ");
    scanf("%d", &inputUser);

    if (inputUser == -1)
        return 0;
    if (inputUser % 2 == 0)
        return inputUser + totalEvenNums();

    return totalEvenNums();

}

int main()
{
    printf("%d", totalEvenNums());
    return 0;
}