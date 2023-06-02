#include "x_readline.h"

char *x_readline(char *s, size_t size)
{
    int newline_index;
    if (fgets(s, size, stdin) == NULL)
    {
        return NULL;
    }

    newline_index = strcspn(s, "\n"); /* if NO newline this is size - 1 */
    if ((size_t) newline_index == size - 1)
    {            /* consume all chars remaining in `stdin` */
        int ch;
        while ((ch = fgetc(stdin)) != '\n' && ch != EOF);
    }
    else
    {            /* swap the newline for a null terminator */
        s[newline_index] = '\0';
    }

    return s;
}
