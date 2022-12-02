#include <stdio.h>

typedef struct point{
    int x;
    int y;
}Point;

int main()
{
    Point pointsArray[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter a first point #%d 'x' coordinate: ", i+1);
        scanf("%d", &pointsArray[i].x);
        printf("Enter a first point #%d 'y' coordinate: ", i+1);
        scanf("%d", &pointsArray[i].y);
    }

    for(i=0; i<5; i++)
    {
        printf("Point #%d = (%d, %d)\n", i+1, pointsArray[i].x, pointsArray[i].y);
    }

    return 0;
}
