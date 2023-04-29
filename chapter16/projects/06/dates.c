/*
 * C programming: A Modern Approach. Chapter 16, Project 06
 * Date: April 2023
 * Description: Determines the older of two dates.
 */

#include <stdio.h>
#include <stdlib.h>

#include "user_input.h"
#define BUF_LEN 10

/*
 * Allocates a buffer for an user inputted date, validates it and stores it in 
 * the pointer arguments.
 */
void get_user_date(int *mm, int *dd, int *yy);

int main(void)
{
    typedef struct {
        int month;
        int day;
        int year;
    } Dates;

    Dates d1, d2;

    printf("Enter first date (mm/dd/yyyy): ");
    get_user_date(&d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yyyy): ");
    get_user_date(&d2.month, &d2.day, &d2.year);

    if ((d1.year < d2.year) || (d1.month < d2.month) || (d1.day < d2.day))
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                d1.month, d1.day, d1.year, 
                d2.month, d2.day, d2.year);
    }
    else if ((d2.year < d1.year) || (d2.month < d1.month) || (d2.day < d1.day))
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                d2.month, d2.day, d2.year, 
                d1.month, d2.day, d2.year);
    }
    else
    {
        printf("They are the same date\n");
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
