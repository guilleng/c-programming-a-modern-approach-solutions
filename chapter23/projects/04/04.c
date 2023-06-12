/*
 * C programming: A Modern Approach. Chapter 23, Project 04
 * Date: June 2023
 * Description: Reverses a series of user-inputted words.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 1024

int main(void)
{
    char input[BUF_SIZE];
    char *word;

    printf("Enter words to be reversed: ");

    if (fgets(input, BUF_SIZE, stdin) == NULL)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }
    if ((word = strtok(input, " \t\n\v\f\r")) == NULL)
    {
        fprintf(stderr, "No words in input\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Reversed words:\n");
    do {
        char *p = word;

        while (*p++);
        p -= 2;

        while (p >= word)
        {
            putchar(*p--);
        }
        putchar('\n');
    } while ((word = strtok(NULL, " \t\n\v\f\r")) != NULL);

    exit(EXIT_SUCCESS);
}
