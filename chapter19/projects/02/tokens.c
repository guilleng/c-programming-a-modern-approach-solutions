#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "tokens.h"

/***
 * Private declarations
 */

/* Returns if and only if the null terminated string `token` represents a valid 
 * a valid RPN token. */
void validate(const char *token);

/* Returns a character that reads from stdin. Replaces newlines and tabs for 
 * spaces */
int read_char(void);


/***
 * Interface implementations
 */
int read_token(char *token, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ')
    {
        ;
    }
    while (ch != ' ' && ch != EOF)
    {
        if (pos < len)
        {
            token[pos++] = ch;
        }
        ch = read_char();
    }
    token[pos] = '\0';

    validate(token);

    return pos;
}


/***
 * Private implementations
 */
void validate(const char *token)
{
    const char *p = token;

    /* operator followed by null terminator */
    if (isoperator(*p) && !*(p + 1))
    {
        return;
    }

    /* possibly a number */
    if (*p == '-' || isdigit(*p))
    {
        p++;
        while(isdigit(*p++))
        {
            /* go past null */;
        }
    }
    
    /* if p moved forward, look for the null terminator */
    if (p > token && !*(p - 1))
    {
        return;
    }
    else
    {
        fprintf(stderr, "invalid token %s\n", token);
        exit(EXIT_FAILURE);
    }
}

int read_char(void)
{
    int ch = getchar();

    return (ch == '\n' || ch == '\t') ? ' ' : ch;
}
