/*
 * C programming: A Modern Approach. Chapter 22, Project 06
 * Date: May 2023
 * Description: Displays the contents of a file as bytes and characters
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    FILE *fp;
    size_t bytes_read = 0, offset = 0;
    BYTE line[10];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    printf("Offset         Bytes                 Characters\n"
           "------ ----------------------------- ----------\n");

    while((bytes_read = fread(line, sizeof(BYTE), 10, fp)) != 0)
    {
        int i;
        if (ferror(fp))
        {
            perror("Error");
            break;
        }

        printf("%6ld ", offset);
        for(i = 0; i < 10; i++)
        {
            if (i <= bytes_read)
            {
                printf("%02X ", line[i]);
            }
            else
            {
                printf("   ");
            }
        }
        for(i = 0; i < bytes_read; i++)
        {
            printf("%c", isprint(line[i]) ? line[i] : '.');
        }
        putchar('\n');
        offset += 10;
    }

    if (fclose(fp) == EOF)
    {
        perror("Error");
    }

    exit(EXIT_SUCCESS);
}
