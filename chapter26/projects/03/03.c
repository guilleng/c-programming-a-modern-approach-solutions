/*
 * C programming: A Modern Approach. Chapter 26, Project 03
 * Date: June 2023
 * Description: Populates an array in reverse order and sorts it with qsort 
 *              measuring and outputting execution time.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

int compare(const void *a, const void *b)
{
    return *(long*) b - *(long*) a;
}

int main(int argc, char *argv[])
{
    long *arr, nelems, i, j;
    char *p;
    clock_t time;

    if (argc != 2)
    {
        fprintf(stderr, "Usage %s <number of array elements>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    errno = 0;
    nelems = strtol(argv[1], &p, 10);
    if (nelems == ERANGE || nelems <= 0 || *p != '\0')
    {
        fprintf(stderr, "\"%s\" is not a valid number of elements\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    arr = malloc(sizeof(long) * nelems);
    if (arr == NULL)
    {
        fprintf(stderr, "malloc() failed\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0, j = nelems; i < nelems; i++, j--)
    {
        arr[i] = j;
    }

    time = clock();
    qsort(arr, nelems, sizeof(long), compare);
    printf("Processor time used: %g\n", 
            (clock() - time) / (double) CLOCKS_PER_SEC);

    free(arr);
    exit(EXIT_SUCCESS);
}
