/*
 * C programming: A Modern Approach. Chapter 22, Project 18
 * Date: June 2023
 * Description: Reads integers from a text file, displays the largest number 
 *              smallest and the median.
 */

#include <stdio.h>
#include <stdlib.h>

#define FORMAT_SPECIFIER " %d"
typedef int NUMBER;

static NUMBER *arr = NULL;
static size_t size = 0;

int num_compare(const void *a, const void *b)
{
    NUMBER numA = *(const NUMBER*)a;
    NUMBER numB = *(const NUMBER*)b;

    if (numA < numB)
        return -1;
    else if (numA > numB)
        return 1;
    else
        return 0;
}

void allocate(void)
{
    if (size == 0)
    {
        if ((arr = malloc(sizeof(NUMBER) * (size = 10000))) == NULL)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        if ((arr = realloc(arr, sizeof(NUMBER) * (size *= 2))) == NULL)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
    }
    return;
}

void cleanup(void)
{
    if (size != 0)
    {
        free(arr);
    }
    return;
}


int main(int argc, char *argv[])
{
    FILE *fp;
    NUMBER n;
    size_t i = 0;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, FORMAT_SPECIFIER, &n) == 1)
    {
        if (i == size)
        {
            allocate();
        }
        arr[i++] = n;

        if (feof(fp) && !ferror(fp))
        {
            break;
        }
        else if (ferror(fp))
        {
            perror("Error");
            cleanup();
            exit(EXIT_FAILURE);
        }
    }

    if (i > 0)
    {
        qsort(arr, i, sizeof(NUMBER), num_compare);

        printf("Largest:"FORMAT_SPECIFIER"\n", arr[i - 1]);
        printf("Smallest:"FORMAT_SPECIFIER"\n", arr[0]);

        if (i % 2 == 0)
        {
            printf("Median:"FORMAT_SPECIFIER"\n", arr[i/2]);
        }
        else
        {
            printf("Median:"FORMAT_SPECIFIER"\n", (arr[i/2] + arr[i/2 - 1]) / 2);
        }
    }
    else
    {
        printf("Empty file\n");
    }

    if (fclose(fp) == EOF)
    {
        cleanup();
        exit(EXIT_FAILURE);
    }
    cleanup();
    exit(EXIT_SUCCESS);
}
