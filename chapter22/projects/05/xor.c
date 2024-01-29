/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

 /* Performs XOR encryption */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY '&'


int main(int argc, char *argv[])
{
    FILE *fp_plain, *fp_cypher;
    int ch;

	if (argc != 3)
    {
        fprintf(stderr, "Usage: %s source destination\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fp_plain = fopen(argv[1], "r");
    fp_cypher = fopen(argv[2], "wb+");

    if (fp_plain == NULL || fp_cypher == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    while((ch = fgetc(fp_plain)) != EOF)
    {
        int cypher = ch ^ KEY;
        if (fwrite(&cypher, sizeof(char), 1, fp_cypher) != 1)
        {
            perror("Error");
            break;
        }
    }

    if (fclose(fp_plain) == EOF)
    {
        perror("Error");
    }
    if (fclose(fp_cypher) == EOF)
    {
        perror("Error");
    }
    exit(EXIT_SUCCESS);
}

