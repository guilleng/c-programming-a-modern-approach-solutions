#ifndef DIALING_CODES_H
#define DIALING_CODES_H

/*
 * Maximum number of characters a dialing code contains.
 */
#define CODEDIGITS  3

/*
 * Returns a pointer to a string containing the name of the country whose 
 * dialing code is the integer `code` represents, prints an error if the code
 * does not correspond to any country in the database.  
 */
char *country_name(int code);

/*
 * If the non-empty string `str` represents a valid decimal integer representing
 * a country dialing code, returns said integer, prints an error to stderr 
 * otherwise.
 */
int valid_country_code(char *str);

#endif
