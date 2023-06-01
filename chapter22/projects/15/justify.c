/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* Formats a file of text */

#include <stdlib.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
    char word[MAX_WORD_LEN+2];
    int word_len;
    FILE *fpin, *fpout;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s inputfile outputfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fpin = fopen(argv[1], "r");
    if (fpin == NULL)
    {
        fprintf(stderr, "Error opening file %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    fpout = fopen(argv[2], "w+");
    if (fpout == NULL)
    {
        fprintf(stderr, "Error opening file %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    clear_line();
    for( ; ; )
    {
        word_len = read_word(word, MAX_WORD_LEN+1, fpin);
        if (word_len == 0)
        {
            flush_line(fpout);
            return 0;
        }
        if (word_len > MAX_WORD_LEN)
        {
            word[MAX_WORD_LEN] = '*';
        }
        if (word_len + 1 > space_remaining())
        {
            write_line(fpout);
            clear_line();
        }
        add_word(word);
    }

    fclose(fpin);
    fclose(fpout);
}
