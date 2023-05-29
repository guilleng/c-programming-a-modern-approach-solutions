#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "run-length-encoding.h"

#define COUNT 0
#define DATA  1

typedef unsigned char BYTE;

BYTE rle_pair[2];

void rle_encode(FILE *fp_in, FILE *fp_out)
{
    while (fread(&rle_pair[DATA], sizeof(BYTE), 1, fp_in) > 0)
    {
        BYTE next;
        long offset = ftell(fp_in) - 1; 
        rle_pair[COUNT] = 1;

        while (fread(&next, sizeof(BYTE), 1, fp_in) > 0)
        {
            if (next == rle_pair[DATA])
            {
                rle_pair[COUNT]++;
            }
            else 
            {
                break;
            }
        }

        if (ferror(fp_in))
        {
            perror("Error");
            return;
        }
        if (fwrite(rle_pair, sizeof(BYTE), 2, fp_out) != 2)
		{
            perror("Error");
            return;
        }
        if (fseek(fp_in, offset + (long)rle_pair[COUNT], SEEK_SET) != 0)
		{
            perror("Error");
            return;
        }
    }
    return;
}

void rle_decode(FILE *fp_in, FILE *fp_out)
{
    while (fread(&rle_pair, sizeof(BYTE), 2, fp_in) > 0)
    {
        if (ferror(fp_in))
        {
            perror("Error");
            return;
        }

        while (rle_pair[COUNT]--)
        {
            if (fwrite(&rle_pair[DATA], sizeof(BYTE), 1, fp_out) != 1)
            {
                perror("Error");
                return;
            }
        }
    }
    return;
}

int is_encoded(const char *name)
{
    while (*name) name++;
    if (*(name-1) && *(name-2)  && *(name-3) && *(name-4) && *(name-5))
    {
        return strcmp(name-4, EXTENSION);
    }
    else
    {
        return 1;
    }
}
