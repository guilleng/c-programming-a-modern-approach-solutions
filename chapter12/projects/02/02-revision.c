/*
 * C programming: A Modern Approach. Chapter 12, Project 02
 * Date: March 2023
 * Description: Checks whether a message is palindrome or not. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 64

int main(void)
{
    char message[MAX_SIZE], ch;
    char *p = message, *q = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p < message + MAX_SIZE)
    {
        if (isalpha(ch))
        {
            *p++ = toupper(ch);
        }
    }
    p -= 1;

    while (q++ < p--)
    {
        if (*p != *q)
        {
            printf("Not a palindrome\n");
            return EXIT_SUCCESS;
        }
    }

    printf("Palindrome\n");
    return EXIT_SUCCESS;
}
