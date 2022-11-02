#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Day = 0x%X \nMonth = 0x%X \nYear = 0x%X", day, month, year);
}