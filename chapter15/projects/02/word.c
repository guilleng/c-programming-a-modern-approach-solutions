#include <stdio.h>
#include "word.h"

int read_char(void)
{
    int ch = getchar();

    return (ch == '\n' || ch == '\t') ? ' ' : ch;
}

int read_word(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ')
    {
        ;
    }
    while (ch != ' ' && ch != EOF)
    {
        if (pos < len - 2)
        {
            word[pos++] = ch;
        }
        else
        {
            word[pos++] = '*';
            while ((ch = read_char()) != ' ' );
            break;
        }
        ch = read_char();
    }
    word[pos] = '\0';
    return pos;
}
