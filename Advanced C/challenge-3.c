#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        puts("Please specify a filename");
        return 1;
    }

    printf("I will examine file '%s'\n", argv[1]);

    return 0;
}