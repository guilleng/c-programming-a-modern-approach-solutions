
/*
 * C programming: A Modern Approach. Chapter 19, exercise 04
 * Date: May 2023
 * Description: Stack implementation using a linked list
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/***
 * Private declarations
 */

struct node {
    Item data;
    struct node *next;
};

struct stack_type {
    struct node* top;
};

/* prints `message` to stderr and terminates the program */
static void terminate(const char *message);


/***
 * Interface implementations
 */

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
    {
        terminate("Error in create: stack could not be created.");
    }
    s->top = NULL;
    return s;
}

void destroy(Stack s)
{
    free(s);
}

void make_empty(Stack s)
{
    while (!is_empty(s))
    {
        pop(s);
    }
}

int is_empty(const Stack s)
{
    return s->top == NULL;
}

int is_full(const Stack s)
{
    return 0;
}

void push(Stack s, Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        terminate("Error in push: stack is full.");
    }

    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

Item pop(Stack s)
{
    struct node *old_top;
    Item i;
    if (is_empty(s))
    {
        terminate("Stack underflow");
    }
    old_top = s->top;
    i = old_top->data;
    s->top = old_top->next;

    free(old_top);
    return i;
}


/***
 * Private implementations
 */

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
