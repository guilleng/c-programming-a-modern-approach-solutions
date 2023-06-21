/*
 * C programming: A Modern Approach. Chapter 26, Project 06-a
 * Date: June 2023
 * Description: Date formatting using strftime.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char s[50];
    time_t currrent_time = time(NULL);
    struct tm *time = localtime(&currrent_time);

    strftime(s, sizeof(s), "%A, %B %d, %Y  %I:%M", time);
    printf("%s%c\n", s, time->tm_hour <= 11 ? 'a' : 'p');

    exit(EXIT_SUCCESS);
}
