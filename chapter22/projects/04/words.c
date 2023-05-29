/*
 * C programming: A Modern Approach. Chapter 22, Project 04
 * Date: May 2023
 * Description: Counts the number of words in a file
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, in_word = 0;
    size_t words = 0;

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
		if (!isspace(ch)) 
        {
            if (!in_word) 
            {
                words++;
                in_word = 1;
            }
        }
        else 
        {
            in_word = 0;
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

    printf("%ld %s\n", words, argv[1]);
    exit(EXIT_SUCCESS);
}
