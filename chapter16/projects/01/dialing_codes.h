#ifndef DIALING_CODES_H
#define DIALING_CODES_H

/*
 * Maximum number of characters a dialing code contains.
 */
#define CODEDIGITS  3

/*
 * Returns a pointer to a string containing the name of the country whose 
 * dialing code is represented by the integer `code`, and prints an error if 
 * the code does not correspond to any country in the database.  
 */
char *country_name(int code);

/*
 * If the non-empty string `str` represents a valid decimal integer that 
 * corresponds to a country dialing code, returns the integer value.
 * Otherwise, it prints an error message to stderr.
 */
int valid_country_code(char *str);

#endif
