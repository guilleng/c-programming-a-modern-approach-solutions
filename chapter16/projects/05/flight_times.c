#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "flight_times.h"
#include "user_input.h"

/***
 * Private declarations
 */

/*
 * Evaluates to the length of `array`
 */
#define ARR_LEN(array) (sizeof(array) / sizeof(array[0]))

/*
 * Evaluates to the number of hours in a 24-hour clock for a valid time `m` 
 * in minutes since midnight.
 */
#define MINS_TO_HH(m)       ((m) / 60)

/*
 * Evaluates to the number of minutes in a 24-hour clock for a valid time `m` 
 * in minutes since midnight.
 */
#define MINS_TO_MM(m)       ((m) - (MINS_TO_HH(m)) * 60)

/*
 * Evaluates to a number representing the time in minutes since midnight given 
 * two valid 24-hour clock parameters `hh` "hours" and `mm` "minutes"
 */
#define HHMM_TO_MIN(hh,mm)  ((hh) * 60 + (mm))


struct daily_flights {
    long departure;
    long arrival;
};

const struct daily_flights time_of[] =
    { {  8 * 60 +  0,  10 * 60 + 16 },
      {  9 * 60 + 43,  11 * 60 + 52 },
      { 11 * 60 + 19,   1 * 60 + 31 },
      { 12 * 60 + 47,   3 * 60 +  0 },
      { 14 * 60 +  0,   4 * 60 +  8 },
      { 15 * 60 + 45,   5 * 60 + 55 },
      { 19 * 60 +  0,   9 * 60 + 20 },
      { 21 * 60 + 45,  11 * 60 + 58 } };

/*
 * If `srt` is a valid time in the 24 hour clock formatted as HH:MM, returns a 
 * long that is the time in minutes since midnight. Otherwise, returns -1. 
 */
long valid_time(const char *str);


/***
 * Interface implementations
 */
int closest_flight(const char *user_time, char *departure, char *arrival)
{
    int i;
    long time;

    if ((time = valid_time(user_time)) == -1)
    {
        fprintf(stderr, "%s not a valid HH:MM (24-hour clock) time", user_time);
        exit(EXIT_FAILURE);
    }

	for (i = 0; (long unsigned) i < ARR_LEN(time_of) - 1; i++) 
	{
        if (*user_time <= time_of[i].departure + 
            (time_of[i+1].departure - time_of[i].departure) / 2) 
        {
            sprintf(departure, "%02ld:%02ld", MINS_TO_HH(time_of[i].departure),
                                              MINS_TO_MM(time_of[i].departure));
            sprintf(arrival, "%02ld:%02ld", MINS_TO_HH(time_of[i].arrival),
                                              MINS_TO_MM(time_of[i].arrival));
            return 1;
        }
	}

    return 0;
}


/***                                                                              
 * Private implementations                                                      
 */
long valid_time(const char *str)
{                                                                               
    int hh, mm;                                                                 
    if (isdigit(  *str  ) && isdigit(*(str + 1)) && *(str + 2) == ':' &&        
        isdigit(*str + 3) && isdigit(*(str + 4)) && strlen(str) == 5)
    {                                                                           
        hh = (( *str ) - '0') * 10 + (*(str+1) - '0');                          
        mm = (*(str+3) - '0') * 10 + (*(str+4) - '0');                          
        if (hh > -1 && hh < 24 && mm > -1 && mm < 60)                           
        {                                                                       
            return HHMM_TO_MIN(hh,mm);                                          
        }                                                                       
    }                                                                           
                                                                                
    return -1;                                                                  
}           

