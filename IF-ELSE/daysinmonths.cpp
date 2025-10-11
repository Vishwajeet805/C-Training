#include<stdio.h>
int main()
    {
    int month, year, days;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    if(month < 1 || month > 12) {
        printf("Invalid month number.\n");
    }
    else if (month == 2) {
            printf("Enter year: ");
            scanf("%d", &year);
        // Check for leap year
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
        printf("Number of days in February %d: %d\n", year, days);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
        printf("Number of days in month %d: %d\n", month, days);
    }
    else {
        days = 31;
        printf("Number of days in month %d: %d\n", month, days);
    }
    return 0;
    }