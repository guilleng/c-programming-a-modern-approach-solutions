#ifndef FLIGHT_TIMES_H
#define FLIGHT_TIMES_H

/*
 * Looks up the closest time of departure and arrivals to `user_time` in the 
 * database. Formats the results to the strings `departure` and `arrival`.
 * Returns 1 on success, 0 on failure.
 */
int closest_flight(const char *user_time, char *departure, char *arrival);

#endif
