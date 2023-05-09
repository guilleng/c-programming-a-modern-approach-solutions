/*
 * C programming: A Modern Approach. Chapter 12, Project 01
 * Date: March 2023
 * Description: Reads a message and prints its reversal.
 */

#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 64

int main(void)
{
    char message[MAX_SIZE];
    char *p = message, ch;
    int len = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF && len < MAX_SIZE)
    {
        *p++ = ch;
        len++;
    }

    p -= 1;
    printf("Reversal is: ");
    while (p >= message)
    {
        putchar(*p--);
    }
    putchar('\n');

    exit(EXIT_SUCCESS);
}
