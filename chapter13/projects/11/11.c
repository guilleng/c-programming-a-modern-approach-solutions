/*
 * C programming: A Modern Approach. Chapter 13, Project 11
 * Date: April 2023
 * Description: Calculates the average word length in a sentence. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1024

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void)
{
    char sentence[MAX_LENGTH+1];

    printf("Enter a sentence: ");
    read_line(sentence, MAX_LENGTH);

    printf("Average word length: "
           "%.1f\n", compute_average_word_length(sentence));

    exit(EXIT_SUCCESS);
}

double compute_average_word_length(const char *sentence)
{
    int word_count = 0,
        word_chars = 0;
    
    while (*sentence)
    {
        while (*sentence && !isspace(*sentence))
        {
            if (isalnum(*sentence))
            {
                word_chars++;
            }
            sentence++;
        }
        word_count++;
        while (*sentence && isspace(*sentence))
        {
            sentence++;
        }
    }

    return (word_count == 0) ? 0.0 : (double) word_chars / word_count;
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
