#include <stdio.h>

int main()
{
    int distance = 300, speed = 80;
    int hours = distance / speed;
    float speedInMinutes = speed / 60.0;
    float remainingMinutes = (distance % speed) / speedInMinutes;

    printf("The time from A to B will take %d hours and %.2f minutes\n", hours, remainingMinutes);
    
    return 0;
}