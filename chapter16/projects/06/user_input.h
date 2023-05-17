#ifndef USER_INPUT_H
#define USER_INPUT_H

/*
 * Reads and stores at most `n` characters from stdin into `str`, discarding 
 * any leading tabs or white spaces until the next occurrence of a newline, 
 * space, tab, or EOF.
 * If no characters were read, `str` is set null , and -1 is returned.
 * Otherwise, `str` is null-terminated and its length (excluding the 
 * terminating null byte) is returned.
 */
int read_stdin(char *str, int n);

/*
 * Validates a string date formatted as `mm/dd/yyyy` and stores its values in 
 * the corresponding referenced arguments: `month`, `day`, and `year`.
 */
int valid_date_string(const char *date, int *month, int *day, int *year);

/*
 * Checks if the integers `month`, `day`, and `year` represent a valid date.
 * The year range is restricted to the open interval (0, 9999).
 */
int valid_date(int *month, int *day, int *year);

#endif
