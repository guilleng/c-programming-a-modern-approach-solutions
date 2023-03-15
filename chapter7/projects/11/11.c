/*
 * C programming: A Modern Approach. Chapter 07, Project 11
 * Date: February 2023
 * Description: Contracts a first and last name string.
 */

#include <stdio.h>

int main(void)
{
    char ch, i;

    printf("Enter a first and last name: ");

    while ( (ch = getchar()) == ' ')
    {
        /* discard withe spaces */;
    }

    i = ch;

    while ( (ch = getchar()) != ' ')
    {
        /* discard rest of name */;
    }

    while ( (ch = getchar()) == ' ')
    {
        /* discard withe spaces */;
    }

    do {
        putchar(ch);
    } while ( (ch = getchar()) != '\n' && ch != ' ');

    printf(", %c.\n", i);
    return 0;
}
