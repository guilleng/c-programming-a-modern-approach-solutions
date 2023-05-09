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
    int i = 0, j = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF && i < MAX_SIZE)
    {
        if (isalpha(ch))
        {
            message[i++] = toupper(ch);
        }
    }
    i -= 1;

    while (i - j > 1)
    {
        if (message[i--] != message[j++])
        {
            printf("Not a palindrome\n");
            exit(EXIT_SUCCESS);
        }
    }

    printf("Palindrome\n");
    exit(EXIT_SUCCESS);
}
