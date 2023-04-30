/*
 * C programming: A Modern Approach. Chapter 16, Project 06
 * Date: April 2023
 * Description: Determines the older of two dates.
 */

#include <stdio.h>
#include <stdlib.h>

#include "user_input.h"
#define BUF_LEN 10

typedef struct {
    int month;
    int day;
    int year;
} Dates;

/*
 * Allocates a buffer for an user inputted date, validates it and stores it in 
 * the pointer arguments.
 */
void get_user_date(int *mm, int *dd, int *yy);

/*
 * Returns the day of the year (an integer between 1 and 366) that corresponds 
 * to the date d.
 */
int day_of_year(Dates d);

/*
 * Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later date than
 * d2, and 0 if d1 and d2 are the same.
 */
int compare_dates(Dates d1, Dates d2);

int main(void)
{
    Dates d1, d2;

    printf("Enter first date (mm/dd/yyyy): ");
    get_user_date(&d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yyyy): ");
    get_user_date(&d2.month, &d2.day, &d2.year);

    switch (compare_dates(d1, d2))
    {
        case -1:
            printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
            d1.month, d1.day, d1.year, 
            d2.month, d2.day, d2.year);
            break;
        case 1:
            printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
            d2.month, d2.day, d2.year, 
            d1.month, d2.day, d2.year);
            break;
        case 0:
            printf("They are the same date\n");
            break;
        default:
            break;
    }

    exit(EXIT_SUCCESS);
}

void get_user_date(int *mm, int *dd, int *yy)
{
    char buffer[BUF_LEN+1];

    read_stdin(buffer, BUF_LEN);

    if (valid_date_string(buffer, mm, dd, yy))
    {
        if (!valid_date(mm, dd, yy))
        {
            fprintf(stderr, "%s not a valid date", buffer);
            exit(EXIT_FAILURE);
        }
    }

    return; 
}

int day_of_year(Dates d)
{
    int i, day_of_year = 0;
    int days_in_month[12] = { 31, 28, 31, 30,                                   
                           /* Jan Feb Mar Apr */
                              31, 30, 31, 31,                                   
                          /* May Jun Jul Aug */
                              30, 31, 30, 31 };
                          /* Set Oct Nov Dec */
                                                
    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
    {
        days_in_month[1]++;
    }

    for (i = 0; i < (d.month - 1); i++)
    {
        day_of_year += days_in_month[i];
    }

    return day_of_year + d.day;
}

int compare_dates(Dates d1, Dates d2)
{
	if (d1.year < d2.year)
	{   
		return -1;
	}
	else if (d2.year < d1.year)
	{   
		return 1;
	}
    else if (day_of_year(d1) < day_of_year(d2))
    {
        return -1;
    }
    else if (day_of_year(d1) > day_of_year(d2))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
