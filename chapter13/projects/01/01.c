/*
 * C programming: A Modern Approach. Chapter 13, Project 01
 * Date: March 2023
 * Description: Finds the smallest and largest in a series of words.  
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 20

int read_line(char str[], int n);
void sort_words(char *buffer, char *smallest, char *largest);

int main(void)
{
    char buffer[STR_SIZE+1], 
         smallest_word[STR_SIZE+1] = "",
         largest_word[STR_SIZE+1]  = "";

    do {
        printf("Enter a word: ");
        read_line(buffer, STR_SIZE);
        sort_words(buffer, smallest_word, largest_word);
    } while (strlen(buffer) != 4);

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    exit(EXIT_SUCCESS);
}

/*
 * Sorts lexicographically by comparing with `buffer` the (possibly empty) null 
 * terminated strings smallest and largest. 
 */
void sort_words(char *buffer, char *smallest, char *largest)
{
    if (*smallest == '\0')
    {
        strcpy(smallest, buffer);
        return;
    }

    if (*largest == '\0')
    {
        if (strcmp(buffer, smallest) < 0)
        {
            strcpy(largest, smallest);
            strcpy(smallest, buffer);
            return;
        }
        else
        {
            strcpy(largest, buffer);
            return;
        }
    }

    if (strcmp(buffer, smallest) < 0)
    {
        strcpy(smallest, buffer);
    }
    if (strcmp(buffer, largest) > 0)
    {
        strcpy(largest, buffer);
    }
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
