/*
 * C programming: A Modern Approach. Chapter 17, Project 05
 * Date: May 2023
 * Description: Sorts lexicographically user entered words. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define BUFFER_SIZE 20

void *my_malloc(size_t bytes);
char *allocate_string(char *str, int len);
void print(char *arr[], size_t nelems);
int compare(const void *p, const void *q);

/*
 * main declares and initializes a dynamically allocated NULL-terminated ragged
 * array of strings `words`. Uses an infinite loop to repeatedly read a word 
 * from stdin, allocates space on the heap for it and appends it to `words`. 
 */ 
int main(void)
{
    char **words;
    size_t num_words = 0;

    words = my_malloc(sizeof(char *));
    *words = NULL;

    while (1)
    {
        char buffer[BUFFER_SIZE+1];
        int len_word = 0;

        printf("Enter a word: ");
        len_word = read_line(buffer, BUFFER_SIZE);

        if (len_word == 0)
        {
            break;
        }
        else
        {
            char **new_words = realloc(words, sizeof(char *) * (num_words + 2));

            if (new_words == NULL)
            {
                fprintf(stderr, "Error: failed allocation\n");
                exit(EXIT_FAILURE);
            }
            words = new_words;

            /* allocate buffer string, point array to it, then append NULL */
            words[num_words++] = allocate_string(buffer, len_word);
            words[num_words] = NULL;
        }
    }

    if (*words)
    {
        printf("In sorted order: ");
        qsort(words, num_words, sizeof(char *), compare);
        print(words, num_words);
    }
    else
    {
        puts("No words to sort\n");
    }

    exit(EXIT_SUCCESS);
}


/*
 * Dynamically allocates the string pointed by `str` whose length excluding the
 * null terminating byte is `len`. Returns a pointer to the newly allocated
 * string.
 */
char *allocate_string(char *str, int len)
{
    char *q, *p;
   
    p = my_malloc(sizeof(char) * (len + 1));

    for (q = p; *str; str++, q++)
    {
        *q = *str;
    }
    *q = '\0';

    return p;
}

/*
 * `malloc` wrapper
 */
void *my_malloc(size_t i)
{
    void *p = malloc(i);
    if (p == NULL)
    {
        fprintf(stderr, "Error: failed allocation\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

/*
 * Prints the strings in the NULL-terminated ragged array `arr`.
 */
void print(char *arr[], size_t nelems)
{
    if (arr && nelems != 0)
    {
        while(*arr) 
        {
            printf("%s ", *arr);
            arr++;
        }
        puts("");
    }
}

/*
 * comparison function
 */
int compare(const void *s1, const void *s2)
{
    char *p = *(char **)s1;
    char *q = *(char **)s2;

    while (*p && *q && *p == *q)
    {
        p++;
        q++;
    }

    if (*p == '\0' && *q == '\0') 
    {
        return 0;
    } 
    else if (*p == '\0') 
    {
        return -1;
    } 
    else if (*q == '\0') 
    {
        return 1;
    } 
    else 
    {
        return (*p > *q) ? 1 : -1;
    }
}	
