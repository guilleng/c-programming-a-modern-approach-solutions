/*
 * C programming: A Modern Approach. Chapter 22, Project 17
 * Date: June 2023
 * Description: Standardizes phone numbers
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUF_SIZE 512

int main(int argc, char *argv[])
{
    FILE *fp;
    size_t linenumber = 1;
    char buffer[BUF_SIZE] = { 0 }, *p;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    while ((p = fgets(buffer, BUF_SIZE, fp)) != NULL)
    {
        char digit[10]; 
        size_t i = 0, digit_count = 0;

        while ((*p) && (*p) != '\n' && (*p) != EOF)
        {
            if (isdigit(*p))
            {
                if (i < 9)
                {
                    digit[i++] = *p;
                }
                digit_count++;
            }
            p++;
        }

        if (digit_count == 0)
        {
            fprintf(stderr, "No digits in line %ld: %s", 
                    linenumber, buffer);
        }
        else if (digit_count < 10)
        {
            fprintf(stderr, "Missing digits in line %ld: %s", 
                    linenumber, buffer);
        }
        else if (digit_count > 10)
        {
            fprintf(stderr, "Extra digits found in line %ld: %s", 
                    linenumber, buffer);
        }
        else
        {
            printf("(%c%c%c) %c%c%c-%c%c%c%c\n", digit[0], digit[1], digit[2], 
                                                 digit[3], digit[4], digit[5], 
                                                 digit[6], digit[7], digit[8], 
                                                 digit[9]);
        }

        linenumber++;
    }

    if (ferror(fp))
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) == EOF)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
