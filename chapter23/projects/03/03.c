/*
 * C programming: A Modern Approach. Chapter 23, Project 03
 * Date: June 2023
 * Description: Reads from stdin capitalizing the first letter of each word.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int ch, prev_ch = ' ';

    while ((ch = getchar()) != EOF) 
    {
        if (isspace(prev_ch) && isprint(ch))
        {
            putchar(toupper(ch));
        }
        else 
        {
            putchar(ch);
        }

        prev_ch = ch;
    }

    exit(EXIT_SUCCESS);
}
