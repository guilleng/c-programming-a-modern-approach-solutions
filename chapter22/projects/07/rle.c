/*
 * C programming: A Modern Approach. Chapter 22, Project 07
 * Date: May 2023
 * Description: run-length encoding
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "run-length-encoding.h"

/* 
 * Checks if `fname` ends with the defined `EXTENSION` constant and returns a
 * filename with it if it does not or without it if it does.
 */
char *output_fname(const char *fname);

int main(int argc, char *argv[])
{
    FILE *fp_in, *fp_out;
    char *new_fname;

	if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    new_fname = output_fname(argv[1]);  /* Set output filename */

    fp_in = fopen(argv[1], "r");        /* Open input file */
    if (fp_in == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    fp_out = fopen(new_fname, "w+b");   /* Open output file */

    if (fp_out == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (is_encoded(argv[1]))
    {                                   /* Process accordingly */
        rle_encode(fp_in, fp_out);
    }
    else
    {
        rle_decode(fp_in, fp_out);
    }

    if (fclose(fp_in) == EOF)
    {
        perror("Error");
    }
    if (fclose(fp_out) == EOF)
    {
        perror("Error");
    }

    exit(EXIT_SUCCESS);
}

char *output_fname(const char *fname)
{
    size_t newnamelen = 0; 
    char *newfname; 

    /* Compute space allocation */
    newnamelen += strlen(fname) + 1 + 
                    (is_encoded(fname) ? strlen(EXTENSION) : 0);

    newfname = malloc(sizeof(char) * newnamelen);
    if (newfname == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
	
    strcpy(newfname, fname);
    if (is_encoded(fname))
    {
        strcat(newfname, EXTENSION);
    }
    else
    {
        newfname[strlen(newfname) - 4]= '\0';
    }

    return newfname;
}
