#include <stdio.h>

// Swap Without 3rd Variable

int main()
{
    int a = 20, b = 10;
    printf("Before A: %d Before B: %d\n", a, b);

    a = a + b;
    printf("Temporary A: %d\n", a);
    b = a - b;
    printf("After B: %d\n", b);
    a = a - b;
    printf("After A: %d\n", a);

    return 0;
}