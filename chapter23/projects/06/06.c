/*
 * C programming: A Modern Approach. Chapter 23, Project 06
 * Date: June 2023
 * Description: Copies text from stdin to stdout replaces all control characters
 *              except newlines for question marks.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int ch;

    while ((ch = getchar()) != EOF) 
    {
        if (iscntrl(ch) && !(ch == '\n'))
        {
            putchar('?');
        }

        putchar(ch);
    }

    exit(EXIT_SUCCESS);
}
