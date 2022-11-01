#include <stdio.h>

int main()
{
    int number;
    char *classification;

    printf("Enter a number: ");
    scanf("%d", &number);

    classification = ( ( number % 2 == 0) ? "even" : "odd");
	printf("The number is %s.\n", classification);

    return 0;
}