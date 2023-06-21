/*
 * C programming: A Modern Approach. Chapter 26, Project 06-c
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

    strftime(s, sizeof(s), "%x %I:%m:%S %p", time);
    printf("%s\n", s);

    exit(EXIT_SUCCESS);
}
