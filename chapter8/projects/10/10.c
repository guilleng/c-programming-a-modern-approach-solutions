/*
 * C programming: A Modern Approach. Chapter 08, Project 10
 * Date: February 2023
 * Description: Displays possible flight time based on inputted time.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hh, mm, user_input, 
        closest_index = 0, min_diff = 24 * 60,

        departures[] = {480, 583, 679, 767, 840,  945, 1140, 1305},
        arrivals[]   = {616, 712, 811, 900, 968, 1075, 1280, 1438},

        departure_hour, departure_minute, arrival_hour, arrival_minute;
    
    char departure_prefix, arrival_prefix;

    printf("Enter a time in HH:MM (24-hour clock): ");
    scanf("%d:%d", &hh, &mm);
    user_input = hh * 60 + mm;

    /* searches closest departure time by index position */
	for (int i = 0; i < (int) (sizeof(departures) / sizeof(departures[0])); i++)     
	{
        int diff = abs(departures[i] - user_input);
        if (diff < min_diff) 
        {
            min_diff = diff;
            closest_index = i;
        }
    }

    /* sets hours and minutes in required format for printing output */
    if (departures[closest_index] / 60 > 12)
    {
        departure_hour = departures[closest_index] / 60 - 12;
        departure_prefix = 'p';
    }
    else
    {
        departure_hour = departures[closest_index] / 60;
        departure_prefix = 'a';
    }
    departure_minute = departures[closest_index] % 60;

    if (arrivals[closest_index] / 60 > 12)
    {
       arrival_hour = arrivals[closest_index] / 60 - 12;
        arrival_prefix = 'p';
    }
    else
    {
        arrival_hour = arrivals[closest_index] / 60;
        arrival_prefix = 'a';
    }
    arrival_minute = arrivals[closest_index] % 60;

    printf("Closest departure %02d:%02d %c.m., arriving at %02d:%02d %c.m.\n", 
            departure_hour, departure_minute, departure_prefix,
			arrival_hour, arrival_minute, arrival_prefix);

    return 0;
}
