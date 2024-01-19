/*
 * C programming: A Modern Approach. Chapter 13, Project 17
 * Date: April 2023
 * Description: Checks whether a message is palindrome or not. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 1024

bool is_palindrome(const char *message);
int read_ignore_nonaplha(char str[], int n);

int main(void)
{
    char message[SIZE+1];

    printf("Enter a message: ");
    read_ignore_nonaplha(message, SIZE);

    if (is_palindrome(message))
    {
      puts("Palindrome");
    }
    else
    {
      puts("Not a palindrome");
    }

    exit(EXIT_SUCCESS);
}

bool is_palindrome(const char *message)
{
    const char *q = message;
    while(*q++)
    {
        /* go past null */;
    }
    q -= 2;

    while (message < q)
    {
        if (*message != *q)
        {
            return false;
        }
        message++; q--;
    }
    return true;
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored. Ignores non-alphabetic characters. 
 * Makes all characters uppercase. 
 */
int read_ignore_nonaplha(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n && isalpha(ch))
        {
            str[i++] = toupper(ch);
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}
