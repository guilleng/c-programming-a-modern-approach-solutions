/*
 * C programming: A Modern Approach. Chapter 22, Project 03
 * Date: May 2023
 * Description: Concatenates files received as command line arguments
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s file-1 file-2 ... file-n\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for (i = 1; argv[i]; i++)
    {
        int ch;
        FILE *fp = fopen(argv[i], "r");

        if (fp == NULL)
        {
            perror("Error");
            continue;
        }

        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        if (ferror(fp))
        {
            perror("Error");
        }
        if (fclose(fp) == EOF)
        {
            perror("Error");
        }
    }

    exit(EXIT_SUCCESS);
}
