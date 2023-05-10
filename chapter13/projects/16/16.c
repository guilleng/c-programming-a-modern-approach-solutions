/*
 * C programming: A Modern Approach. Chapter 13, Project 16
 * Date: April 2023
 * Description: Reads a message, reverses it in-place and prints its.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 1024

void reverse(char *message);
int read_line(char str[], int n);

int main(void)
{
    char message[MAX_SIZE+1];

    printf("Enter a message: ");
    read_line(message, MAX_SIZE);

    reverse(message);
    printf("Reversal is: ");
    puts(message);

    exit (EXIT_SUCCESS);
}

void reverse(char *message)
{
    char *q = message;

    while(*q++)
    {
        /* go past null */;
    }
    q -= 2; 

    while (message < q)
    {
        char ch = *message;
        *message = *q;
        *q = ch;
        message++, q--;
    }
    return;
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored. 
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}
