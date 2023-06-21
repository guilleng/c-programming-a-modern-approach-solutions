/*
 * C programming: A Modern Approach. Chapter 26, Project 04
 * Date: June 2023
 * Description: Calculates a date n days from an user inputted date. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char buffer[80];
    struct tm t;
    int days;

    printf("Enter a date in format mm/dd/yyyy and a number of days: ");

    if(fgets(buffer, 80, stdin) == NULL)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    if(sscanf(buffer, "%d/%d/%d %d", 
                &t.tm_mon, &t.tm_mday, &t.tm_year, &days) != 4)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    t.tm_mday += days;
    t.tm_sec = 0;
    t.tm_min = 0;
    t.tm_hour = 0;
    t.tm_isdst = -1;

    mktime(&t);
     
    printf("The date in %d days is: %d/%d/%d\n", 
            days, t.tm_mon, t.tm_mday, t.tm_year);

    exit(EXIT_SUCCESS);
}
