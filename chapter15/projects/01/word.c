/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

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
        if (pos < len)
        {
            word[pos++] = ch;
        }
        ch = read_char();
    }
    word[pos] = '\0';
    return pos;
}
