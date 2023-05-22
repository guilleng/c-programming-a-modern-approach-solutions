/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    char data[MAX_WORD_LEN+1];
    struct node *next;
};

struct node *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	while (line)
	{
		struct node *temp = line;
		line = line->next;
		free(temp);
	}
	
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct node *new, **p = &line;

    new = malloc(sizeof(struct node));
    if (new == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    strcpy(new->data, word);
    new->next = NULL;

    while (*p != NULL)
    {
        p = &(*p)->next;
    }
    *p = new;

    line_len += strlen(word);
    if (num_words > 0)
    {
        line_len++;
    }
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
	int extra_spaces, spaces_to_insert, i, ch_count = 0;
	struct node *word = line;
	extra_spaces = space_remaining();

	while (ch_count < line_len && word != NULL)
    {
		printf("%s", word->data);
		if (num_words > 1) 
        {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (i = 1; i <= spaces_to_insert + 1; i++)
            {
                putchar(' ');
            }
            extra_spaces -= spaces_to_insert;
		}
		ch_count += strlen(word->data) + 1;
		num_words--;
		word = word->next;
	}
	putchar('\n');
}

void flush_line(void)
{
	if (line_len > 0)
	{
        int i = 0;
        struct node *word = line;
        while (word)
        {
            if (i > 0 && word->next != NULL)
            {
                putchar(' ');
            }
            printf("%s ", word->data);
            i++, word = word->next;
        }
    }
    puts("");
    clear_line();
}
