 /* Sorts an array of integers using Quicksort algorithm.  */

#ifndef STDIO_H
#define STDIO_H

#include <stdio.h>

#endif

#include "quicksort.h"

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
