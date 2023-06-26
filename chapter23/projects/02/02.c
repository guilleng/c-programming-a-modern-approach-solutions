/*
 * C programming: A Modern Approach. Chapter 23, Project 02
 * Date: June 2023
 * Description: Copies text from stdin to stdout omitting blank lines and 
 *              removing leading white spaces from non-blank lines.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int ch, prev_ch = '\n';
    int skip = 1;

    while ((ch = getchar()) != EOF) 
    {
        if (prev_ch == '\n')
        {
            skip = 1;
        }

        if (skip && isspace(ch))
        {
            continue;
        }

        skip = 0;
        putchar(ch);
        prev_ch = ch;
    }

    exit(EXIT_SUCCESS);
}
