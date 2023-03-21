/*
 * C programming: A Modern Approach. Chapter 11, Project 02
 * Date: March 2023
 * Description: Displays possible flight time based on user inputted time.
 */

#include <stdio.h>

#define DEPARTURE1 (  8 * 60 +  0)
#define ARRIVAL1   ( 10 * 60 + 16)
#define DEPARTURE2 (  9 * 60 + 43)
#define ARRIVAL2   ( 11 * 60 + 52)
#define DEPARTURE3 ( 11 * 60 + 19)
#define ARRIVAL3   ( 13 * 60 + 31)
#define DEPARTURE4 ( 12 * 60 + 47)
#define ARRIVAL4   ( 15 * 60 +  0)
#define DEPARTURE5 ( 14 * 60 +  0)
#define ARRIVAL5   ( 16 * 60 +  8)
#define DEPARTURE6 ( 15 * 60 + 45)
#define ARRIVAL6   ( 17 * 60 + 55)
#define DEPARTURE7 ( 19 * 60 +  0)
#define ARRIVAL7   ( 21 * 60 + 20)
#define DEPARTURE8 ( 21 * 60 + 45)
#define ARRIVAL8   ( 23 * 60 + 58)

void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);

int main(void)
{
    int hh, mm, departure_time, arrival_time;

    printf("Enter a time in the HH:MM (24-hour clock): ");
    scanf("%d:%d", &hh, &mm);
    
    find_closest_flight(hh * 60 + mm, &departure_time, &arrival_time);

     printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
             departure_time / 60, departure_time % 60,
             arrival_time / 60, arrival_time % 60);

    return 0;
}

/*
 * Assigns to the referenced variables `departure_time` and `arrival_time` the
 * departure and arrival that is closest to the `desired_time` in accordance to 
 * the constants definitions at the top of the file. 
 * All times expressed in minutes since midnight.
 */

void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time)
{
    if (desired_time <= DEPARTURE1 + (DEPARTURE2 - DEPARTURE1) / 2)
    {
        *departure_time = DEPARTURE1;
        *arrival_time   = ARRIVAL1;
    }
    else if (desired_time < DEPARTURE2 + (DEPARTURE3 - DEPARTURE2) / 2)
    {
        *departure_time = DEPARTURE2;
        *arrival_time   = ARRIVAL2;
    }
    else if (desired_time < DEPARTURE3 + (DEPARTURE4 - DEPARTURE3) / 2)
    {
        *departure_time = DEPARTURE3;
        *arrival_time   = ARRIVAL3;
    }
    else if (desired_time < DEPARTURE4 + (DEPARTURE5 - DEPARTURE4) / 2)
    {
        *departure_time = DEPARTURE4;
        *arrival_time   = ARRIVAL4;
    }
    else if (desired_time < DEPARTURE5 + (DEPARTURE6 - DEPARTURE5) / 2)
    {
        *departure_time = DEPARTURE5;
        *arrival_time   = ARRIVAL5;
    }
    else if (desired_time < DEPARTURE6 + (DEPARTURE7 - DEPARTURE6) / 2)
    {
        *departure_time = DEPARTURE6;
        *arrival_time   = ARRIVAL6;
    }
    else if (desired_time < DEPARTURE7 + (DEPARTURE8 - DEPARTURE7) / 2)
    {
        *departure_time = DEPARTURE7;
        *arrival_time   = ARRIVAL7;
    }
    else
    {
        *departure_time = DEPARTURE8;
        *arrival_time   = ARRIVAL8;
    }
}
