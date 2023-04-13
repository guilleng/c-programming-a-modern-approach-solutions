/*
 * C programming: A Modern Approach. Chapter 13, Project 17
 * Date: April 2023
 * Description: Checks whether a message is palindrome or not. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define SIZE 1024

bool is_palindrome(const char *message);
int read_line_ignore_nonaplha(char str[], int n);

int main(void)
{
    char message[SIZE+1];

    printf("Enter a message: ");
    read_line_ignore_nonaplha(message, SIZE);

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
 * Reads a line ignoring non-alpha characters converting all to uppercase.
 */
int read_line_ignore_nonaplha(char *str, int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') 
	{
		if (i == 0 && isspace(ch))
        {
            /* skip withe spaces */;
        }
        else if (i < n)
        { 
            if (isalpha(ch))
            {
                str[i++] = toupper(ch);
            }
        }
        else
        {
            while ((ch = getchar()) != '\n')
            {
                /* discard rest of input */;
            }
            str[0] = '\0';
            return -1;
        }
    }

    str[i] = '\0';
    return i;
}
