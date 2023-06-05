/*
 * C programming: A Modern Approach. Chapter 22, Project 19
 * Date: May 2023
 * Description: Converts between Windows and Unix text files. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "lineendings.h"

int main(int argc, char *argv[])
{
    FILE *fp_in, *fp_out;
    int ch;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s source destination\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fp_in = fopen(argv[1], "rb");
    fp_out = fopen(argv[2], "wb");

    if (fp_in == NULL || fp_out == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

	convert_file(fp_in, fp_out);

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
