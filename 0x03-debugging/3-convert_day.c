#include "main.h"

/**
 * convert_day - converts day of month to day of year, accounting for leap years
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of year
 */

int convert_day(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year and adjust February days
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    int day_of_year = day;
    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }

    return day_of_year;
}

