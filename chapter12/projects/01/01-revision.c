/*
 * C programming: A Modern Approach. Chapter 12, Project 01
 * Date: March 2023
 * Description: Reads a message and prints its reversal.
 */

#include <stdio.h>

#define MAX_SIZE 64

int main(void)
{
    char message[MAX_SIZE];
    char *p = message, ch;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p < message + MAX_SIZE)
    {
        *p++ = ch;
    }

    p -= 1;
    printf("Reversal is: ");
    while (p >= message)
    {
        putchar(*p--);
    }
    putchar('\n');

    return 0;
}
