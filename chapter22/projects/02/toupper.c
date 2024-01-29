/*
 * C programming: A Modern Approach. Chapter 22, Project 02
 * Date: May 2023
 * Description: Converts all letters in a file to uppercase.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        perror("Error");        /* prints an error message related */
        exit(EXIT_FAILURE);     /* to the last system call         */
    }

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(toupper(ch));
    }
    
    if (ferror(fp))
    {
        perror("Error");
    }
    if (fclose(fp) == EOF)
    {
        perror("Error");
    }

    exit(EXIT_SUCCESS);
}
