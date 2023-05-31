/*
 * C programming: A Modern Approach. Chapter 22, Project 11
 * Date: May 2023
 * Description: Formats a date 
 */

#include <stdio.h>
#include <stdlib.h>

int valid_date(int *month, int *day, int *year);

int main(int argc, char *argv[])
{
    const char *months[] = { "January", "February", "March", "April",
                             "May", "June", "July", "August", 
                             "September", "October", "November", "December" };
    int month, day, year;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s mm-dd-yyyy\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    if (sscanf(argv[1], " %d%*[-/]%d%*[-/]%d", &month, &day, &year) == 3)
    {
        if (valid_date(&month, &day, &year))
        {
            printf("%s %d, %d", months[month-1], day, year);
        }
        else
        {
            printf("Not a valid date\n");
        }
    }
    else
    {
        printf("Invalid input: %s\n", argv[1]);
    }

    exit(EXIT_SUCCESS);
}

int valid_date(int *month, int *day, int *year)
{
    if (*month < 1 || *month > 12)
    {
        return 0;
    }
    if (*year < 1 || *year > 9999)
    {
        return 0;
    }

    switch (*month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return (*day > 0 && *day < 32);
        case 4: case 6: case 9: case 11:
            return (*day > 0 && *day < 31);
        case 2:
            if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
            {
                return (*day > 0 && *day < 30);
            }
            else
            {
                return (*day > 0 && *day < 29);
            }
    }
    return 1;
}
