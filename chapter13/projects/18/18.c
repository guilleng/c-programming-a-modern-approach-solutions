/*
 * C programming: A Modern Approach. Chapter 13, Project 18
 * Date: April 2023
 * Description: Reformats a date string.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int read_line(char str[], int n);
bool valid_date(char *date, int *month, int *day, int *year);
bool valid_string(const char *date);

int main(void)
{
    const char *month_names[] = { "January", "February", "March", 
                                  "April",   "May",      "June", 
                                  "July",    "August",   "September", 
                                  "October", "November", "December" };
    char date[10+1] = "";
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    read_line(date, 10);

    if (!valid_string(date) || !valid_date(date, &month, &day, &year))
    {
        puts("Invalid input");
        exit(EXIT_FAILURE);
    }

    printf("You entered the date "
           "%s %02d, %04d\n", month_names[month-1], day, year);

    exit(EXIT_SUCCESS);
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored. 
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}

/*
 * Validates a string date formatted as `mm/dd/yyyy` storing its values in the 
 * homonymous referenced arguments
 */
bool valid_date(char *date, int *month, int *day, int *year)
{
    char *p = date;

    while(*date != '/') date++;
    *date = '\0';
    *month = atoi(p);
    if (*month < 1 || *month > 12)
    {
        return false;
    }
    p = ++date;

    while(*date != '/') date++;
    *date = '\0';
    *day = atoi(p);
    p = ++date;

    while(*date) date++;
    *year = atoi(p);
    if (*year < 1 || *year > 9999)
    {
        return false;
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

    return true;
}

/*
 * Returns true if and only if the given string is null-terminated and has the
 * form `xx/xx/xxxx` where each x is a digit.
 */
bool valid_string(const char *date)
{
    for (int i = 0; i < 10; i++)
    {
        switch (i)
        {
            case 2: case 5:
                if (date[i] != '/')    return false;
                break;
            case 9:
                if (date[i] != '\0')   return false;
                break;
            default:
                if (!isdigit(date[i])) return false;
                break;
        }
    }
    return true;
}
