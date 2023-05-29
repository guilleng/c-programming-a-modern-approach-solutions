/*
 * C programming: A Modern Approach. Chapter 22, Project 04
 * Date: May 2023
 * Description: Counts the number of lines in a file
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;
    size_t lines = 0;

    if (argc != 2)
    {
        fprintf(stderr, "usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }

    if (ferror(fp))
    {
        perror("Error");
    }

    if (fclose(fp) == EOF)
    {
        perror("Error");
    }

    printf("%ld %s\n", lines, argv[1]);
    exit(EXIT_SUCCESS);
}
