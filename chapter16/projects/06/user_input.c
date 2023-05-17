#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "user_input.h"

/***
 * Private declarations
 */

/*
 * Advances the pointer `ch` until it finds a character that is not a space nor 
 * a tab.
 */
void discard_tabs_spaces(int *ch);


/***
 * Interface implementations
 */
int read_stdin(char *str, int n)
{
    int ch, i = 0;

    discard_tabs_spaces(&ch);

    while (!isspace(ch) && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }

    str[i] = '\0';
    return (i == 0) ? -1 : i;
}

int valid_date_string(const char *date, int *month, int *day, int *year)
{
    if (sscanf(date, "%d/ %d/ %d", month, day, year) != 3)
    {
        fprintf(stderr, "%s Invalid date format.\n", date);
        exit(EXIT_FAILURE);
    }
    return 1;
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


/*** 
 * Private implementations
 */
void discard_tabs_spaces(int *ch)
{
    while ((*ch = getchar()) == ' ' || *ch == '\t')
    {
        ;
    }

    return;
}

