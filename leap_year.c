#include <stdio.h>

#define TRUE    1
#define FALSE   0

int main()
{
    int year, is_leap;

    printf("\nInsert an year: ");
    scanf("%d", &year);

    is_leap = (year%4==0 && year%100!=0 || year%400==0)? TRUE:FALSE;

    if(is_leap)
        printf("\nYou insered a leap year!\n\n");
    else
        printf("\nYou didn't insert a leap year!\n\n");

    return 0;
}