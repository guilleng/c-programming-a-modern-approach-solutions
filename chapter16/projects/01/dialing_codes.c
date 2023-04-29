#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "dialing_codes.h"

/* Local Macros
 * ************/
#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

/* Data Definitions
 * ****************/

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] =
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Colombia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63},
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};

/* Public functions                                                            
 *******************/

/* Returns a pointer to a null terminated string containing the name of the
 * country whose international dialing code is `code`. */
char *country_name(int code)
{
    int i;

    for (i = 0; i < (int) ARRAY_SIZE(country_codes) ; i++)
    {
        if(country_codes[i].code == code)
        {
            return country_codes[i].country;
        }
    }
    fprintf(stderr, "Error: %d not a valid dialing code in database.\n", code);
    exit(EXIT_FAILURE);
}

/* Validates and returns an international dialing country code */
int valid_country_code(char *str) 
{
    int number = 0;

    if (*str == '\0')
    {
        fprintf(stderr, "Error: empty string.\n");
        exit(EXIT_FAILURE);
    }

    if (*str == '0')
    {
        fprintf(stderr, "Error: zero leading code.\n");
        exit(EXIT_FAILURE);
    }

    while (*str && isdigit(*str)) 
    { 
        number = number * 10 + (*str - '0');
        str++;
    }

    if (*str) 
    {
        fprintf(stderr, "Error: non-digit character detected.\n");
        exit(EXIT_FAILURE);
    }

    if (number > 999)
    {
        fprintf(stderr, "Error: %d not valid input.\n", number);
        exit(EXIT_FAILURE);
    }

    return number;
}
