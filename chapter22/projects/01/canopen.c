/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* Checks whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int exit_flag = 1;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s file-1 file-2 ... file-n\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    while (argc-- > 1)
    {
        if ((fp = fopen(argv[argc], "r")) != NULL)
        {
            printf("%s can be opened\n", argv[argc]);
            fclose(fp);
        }
        else
        {
            printf("%s can't be opened\n", argv[argc]);
            exit_flag = 0;
        }
    }
    exit (exit_flag ? EXIT_SUCCESS : EXIT_FAILURE);
}
