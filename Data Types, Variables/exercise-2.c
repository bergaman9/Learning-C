#include <stdio.h>

int main()
{
    int seconds;
    int totalHours, totalMinutes, remainingSeconds;

    printf("Enter an integer representing seconds: ");
    scanf("%d", &seconds);

    totalHours = seconds/3600;
    totalMinutes = (seconds - totalHours * 3600) / 60;
    remainingSeconds = (seconds - totalHours * 3600) % 60;

    printf("%d:%d:%d", totalHours, totalMinutes, remainingSeconds);

    return 0;
}