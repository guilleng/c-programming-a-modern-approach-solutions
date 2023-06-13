/*
 * C programming: A Modern Approach. Chapter 23, Project 07
 * Date: June 2023
 * Description: Counts the number of sentences in a text file read from stdin. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch, count = 0, prev = 0;

    while ((ch = getchar()) != EOF)
    {
        count += (prev == '.' || prev == '?' || prev == '!') && (ch == ' ' || ch == '\n');
        prev = ch;
    }

    printf("%d\n", count);
    exit(EXIT_SUCCESS);
}

