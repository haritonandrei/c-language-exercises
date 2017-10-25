#include <stdio.h>

#define TRUE    1
#define FALSE   0

int main()
{
    int in_year, in_month, in_day;
    int out_year, out_month, out_day;
    int is_leap;

    // Input
    printf("\nInsert year, month and day: ");
    scanf("%d %i %d", &in_year, &in_month, &in_day);

    // Is leap year?
    is_leap = (in_year%4==0 && in_year%100!=0 || in_year%400==0)? TRUE:FALSE;

    // Year's last day?
    if (in_month==12 && in_day==31)
    {
        out_year    = in_year+1;
        out_month   = out_day = 1;
    }
    // Month's last day?
    else
    {
        if ((in_month==4 ||     // Months with 30 days
            in_month==6 ||
            in_month==9 ||
            in_month==11 &&
            in_day==30) ||
            (in_month==2 &&     // February on leap years
            in_day==29 &&
            is_leap) ||
            (in_month==2 &&     // February not on leap years
            in_day==28 &&
            !is_leap) ||
            (in_day==31))       // Months with 31 days
        {
            out_month   = in_month+1;
            out_day     = 1;
            out_year    = in_year;
        }
        // Other days
        else
        {
            out_day     = in_day+1;
            out_month   = in_month;
            out_year    = in_year;
        }
    }

    // Output
    printf("\nThe next day is: %d %i %d\n\n", out_year, out_month, out_day);

    return 0;
}
