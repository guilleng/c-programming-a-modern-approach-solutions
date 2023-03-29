/*
 * C programming: A Modern Approach. Chapter 12, Project 01
 * Date: March 2023
 * Description: Reads a message and prints its reversal. 
 */

#include <stdio.h>

#define MAX_SIZE 64

int main(void)
{
    char message[MAX_SIZE], ch;
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && i < MAX_SIZE)
    {
        message[i++] = ch;
    }

    i -= 1;
    printf("Reversal is: ");
    while (i >= 0)
    {
        putchar(message[i--]);
    }
    putchar('\n');

    return 0;
}
