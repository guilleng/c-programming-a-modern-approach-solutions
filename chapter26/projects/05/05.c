/*
 * C programming: A Modern Approach. Chapter 26, Project 05
 * Date: June 2023
 * Description: Calculates the number of days between two user inputted dates.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char buffer[80];
    struct tm t1;
    struct tm t2;
    time_t time1, time2;
    double difference;

    printf("Enter two dates in format mm/dd/yyyy separated by a space: ");

    if(fgets(buffer, 80, stdin) == NULL)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    if(sscanf(buffer, "%d/%d/%d %d/%d/%d", 
                &t1.tm_mon, &t1.tm_mday, &t1.tm_year,
                &t2.tm_mon, &t2.tm_mday, &t2.tm_year) != 6)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }
    t1.tm_year -= 1900;
    t2.tm_year -= 1900;

    time1 = mktime(&t1);
    time2 = mktime(&t2);

    if (time1 == -1 || time2 == -1)
    {
        fprintf(stderr, "Error converting date to time_t\n");
        exit(EXIT_FAILURE);
    }

    difference = difftime(time2, time1);
    difference = difference / (60 * 60 * 24);

    printf("Days between dates: %.0f\n", difference);

    exit(EXIT_SUCCESS);
}
