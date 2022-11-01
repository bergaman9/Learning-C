#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    if (x>0)
        if(y>0)
            printf("1st Quadrant");
        else
            printf("4th Quadrant");
    else if (x<0)
        if(y>0)
            printf("2nd Quadrant");
        else
            printf("3rd Quadrant");
    else 
        printf("Origin");

    return 0;
}