#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lineendings.h"

enum { 
    NotSet = -2, 
    Error, 
    NotASCII, 
    Windows, Unix, 
    Neither
} Type;

char buffer[BUF_SIZE];

/*
 * Searches for a line-ending character in the given file pointer `fp` and 
 * returns the line-ending type according to the `Type` enumeration:
 *   `Error` at the occurrence of an error during file operations.
 *   `Neither` when neither CRLF nor NL line-ending is detected.
 *   `NotASCII` when the file is not an ASCII file.
 *   `Windows` at the first occurrence of a CRLF line-ending.
 *   `Unix` at the first occurrence of an NL line-ending.
 */
int is_unixorwin(FILE *fp)
{
    Type = NotSet;
    while (fgets(buffer, BUF_SIZE, fp) != NULL && Type == NotSet)
    {
        char *p = buffer;
        if (ferror(fp))
        {
            perror("Error");
            return Error;
        }

        while (*p && Type == NotSet)
        {
            if (!isascii(*p))
            {
                Type = NotASCII;
                break;
            }

            if ((*p) == '\n')
            {
                if (strlen(buffer) > 1 && *(p-1) == '\r')
                {
                    Type = Windows;
                    break;
                }
                else
                {
                    Type = Unix;
                    break;
                }
            }
            p++;
        }
    }

    rewind(fp);

    if (Type == NotSet)
    {
        return Neither;
    }
    else
    {
        return Type;
    }
}

FILE *convert_file(FILE *input_stream, FILE *output_stream)
{
    switch(is_unixorwin(input_stream))
    {
        case Windows:                                               /*win2unix*/
            while(fgets(buffer, BUF_SIZE, input_stream) != NULL)
            {
                char *p = buffer;

                if (ferror(input_stream))
                {
                    perror("Error");
                    return NULL;
                }

                while (*p)
                {
                    if ((*p) == '\r')
                    {
                        p++;
                    }
                    else
                    {
                        if (fputc(*p++, output_stream) == EOF)
                        {
                            perror("Error");
                            return NULL;
                        }
                    }
                }
            }
            break;

        case Unix:                                                  /*unix2win*/
            while(fgets(buffer, BUF_SIZE, input_stream) != NULL)
            {
                char *p = buffer;
                while (*p)
                {
                    if ((*p) == '\n')
                    {
                        if (fputc('\r', output_stream) == EOF)
                        {
                            perror("Error");
                            return NULL;
                        }
                        if (fputc('\n', output_stream) == EOF)
                        {
                            perror("Error");
                            return NULL;
                        }
                        break;
                    }
                    else
                    {
                        if (fputc(*p++, output_stream) == EOF)
                        {
                            perror("Error");
                            return NULL;
                        }
                    }
                }
            }
            break;

        case Neither:
            fprintf(stderr, "No CRLF nor NL detected\n");
            return NULL;
        case NotASCII:
            fprintf(stderr, "Not an ASCII file\n");
            return NULL;
        default: 
            break;
    }

    return output_stream;
}


