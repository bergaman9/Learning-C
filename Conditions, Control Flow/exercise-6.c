#include <stdio.h>

int main()
{
    int seconds, hours, minutes;

    printf("Enter an integer in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    seconds = (seconds - hours * 3600) % 60;

    if(hours < 10 && minutes < 10 && seconds < 10)
        printf("0%d : 0%d : 0%d", hours, minutes, seconds);
    else if(hours < 10 && minutes < 10)
        printf("0%d : 0%d : %d", hours, minutes, seconds);
    else if(hours < 10 && seconds < 10)
        printf("0%d : %d : 0%d", hours, minutes, seconds);
    else if(minutes < 10 && seconds < 10)
        printf("%d : 0%d : 0%d", hours, minutes, seconds);
    else if(seconds < 10)
        printf("%d : %d : 0%d", hours, minutes, seconds);
    else if(minutes < 10)
        printf("%d : 0%d : %d", hours, minutes, seconds);
    else if(hours < 10)
        printf("0%d : %d : %d", hours, minutes, seconds);
    else
        printf("%d : %d : %d", hours, minutes, seconds);

    return 0;
}