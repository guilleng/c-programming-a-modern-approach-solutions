#ifndef USER_INPUT_H
#define USER_INPUT_H

/*
 * Stores at most `n` characters read from stdin discarding any leading tabs, 
 * or withe spaces in `str` until whichever appears next: a newline, space, 
 * tab or EOF.
 * If no characters were read, `str` is a null string and -1 is returned. 
 * Otherwise null-terminates `str` and returns its length excluding the 
 * terminating null byte. 
 */
int read_stdin(char *str, int n);

/*
 * Validates a string date formatted as `mm/dd/yyyy` storing its values in the 
 * homonymous referenced arguments
 */
int valid_date_string(const char *date, int *month, int *day, int *year);

/*
 * Checks if the integers `month`, `day` and `year` represent a valid date.
 * The year range is restricted to the open interval (0, 9999).
 */
int valid_date(int *month, int *day, int *year);

#endif
