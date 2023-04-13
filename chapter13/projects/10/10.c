/*
 * C programming: A Modern Approach. Chapter 13, Project 10
 * Date: April 2023
 * Description: Contracts a first and last name string.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NAME_LENGHT 64

void reverse_name(char *name);
int read_line(char str[], int n);

int main(void)
{
    char name[NAME_LENGHT+1];

    printf("Enter a first and last name: ");
    read_line(name, NAME_LENGHT);
    reverse_name(name);
    puts(name);
    exit(EXIT_SUCCESS);
}

void reverse_name(char *name)
{
    char initial[] = { ',', ' ', '_', '.', '\0' },
         buffer[NAME_LENGHT] = "",
         *p = name;

    /* Capture the initial (first non-space character) */
    while (isspace(*p)) p++;
    initial[2] = *p;

    /* Find the start of the last name */
    while (isalpha(*p)) p++;
    while (isspace(*p)) p++;

    /* Remove any trailing spaces after the last name */
    {
        char *q = p;
        while (isalpha(*q)) q++;
        *q = '\0';
    }

    /* Copy last name into buffer, append the comma initial and dot */
    strcpy(buffer, p);
    strcat(buffer, initial);

    /* Copy the buffer back into the original input string */
    strcpy(name, buffer);
    return;
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored when successful. 
 * Returns -1 if `n` is exceeded leaving `str` empty.
 */
int read_line(char str[], int n)
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
            str[i++] = ch;
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
