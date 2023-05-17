#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "user_input.h"

/***
 * Private declarations
 */

/*
 * Advances the pointer `ch` until it finds a character that is not a space nor 
 * a tab.
 */
void discard_tabs_spaces(int *ch);


/***
 * Interface implementations
 */
int read_stdin(char *str, int n)
{
    int ch, i = 0;

    discard_tabs_spaces(&ch);

    while (!isspace(ch) && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }

    str[i] = '\0';
    return (i == 0) ? -1 : i;
}

/***
 * Private implementations
 */
void discard_tabs_spaces(int *ch)
{
    while ((*ch = getchar()) == ' ' || *ch == '\t')
    {
        ;
    }

    return;
}
