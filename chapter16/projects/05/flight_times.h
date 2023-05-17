#ifndef FLIGHT_TIMES_H
#define FLIGHT_TIMES_H

/*
 * Searches the database for the closest departure and arrival times to 
 * `user_time`. Formats the results as strings and stores them in `departure` 
 * and `arrival` respectively.
 * Returns 1 if successful, 0 otherwise.
 */
int closest_flight(const char *user_time, char *departure, char *arrival);

#endif
