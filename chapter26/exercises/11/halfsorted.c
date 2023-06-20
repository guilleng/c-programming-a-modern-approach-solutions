/*
 * C programming: A Modern Approach. Chapter 26, Exercise 11
 * Date: June 2023
 * Description: Shows bsarch behavior for partially sorted arrays.  
 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}

int main(void)
{
    int larr[] = {1, 2, 3, 4, 5, 7, 9 , 8, 10, 6}; /* lower half sorted */
    int rarr[] = {2, 1, 5, 3, 4, 6, 7 , 8, 9, 10}; /* upper half sorted */

    int *p, i;
    int key = 1;

    for (i = 0; i < 5; i++, key++)
    {
        p = bsearch(&key, larr, 10, sizeof(int), compare);
        printf("%p %p %2d\n", p, larr+i, *p);
    }

    for (i = 5; i < 10; i++, key++)
    {
        p = bsearch(&key, rarr, 10, sizeof(int), compare);
        printf("%p %p %2d\n", p, rarr+i, *p);
    }

    exit(EXIT_SUCCESS);
}

