/*
 * C programming: A Modern Approach. Chapter 16, Project 05
 * Date: April 2023
 * Description: Displays possible flight time based on user inputted time.
 */

#include <stdio.h>
#include <stdlib.h>
#include "flight_times.h"
#include "user_input.h"

#define BUF_LENGHT 5

int main(void)
{
    char buffer[BUF_LENGHT+1], departure[BUF_LENGHT+1], arrival[BUF_LENGHT+1];

    printf("Enter a time in the HH:MM (24-hour clock): ");

    if (read_stdin(buffer, BUF_LENGHT) == BUF_LENGHT && 
            (closest_flight(buffer, departure, arrival)))
    {
        printf("Closest departure: %s, arrival %s", departure, arrival);
    }
    else
    {
        fprintf(stderr, "%s not a valid HH:MM (24-hour clock) time", buffer);
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
