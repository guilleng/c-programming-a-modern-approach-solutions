/*
 * C programming: A Modern Approach. Chapter 19, exercise 04
 * Date: May 2023
 * Description: Stack implementation using a fixed-length array
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/***
 * Private declarations
 */

/* STACK_SIZE is defined on the interface */
struct stack_type {
    int contents[STACK_SIZE];
    int top;
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
    s->top = 0;
    return s;
}

void destroy(Stack s)
{
    free(s);
}

void make_empty(Stack s)
{
    s->top = 0;
}

int is_empty(const Stack s)
{
    return s->top == 0;
}

int is_full(const Stack s)
{
    return s->top == STACK_SIZE;
}

void push(Stack s, int i)
{
    if (is_full(s))
    {
        terminate("Stack overflow");
    }
    s->contents[s->top++] = i;

}

int pop(Stack s)
{
    if (is_empty(s))
    {
        terminate("Stack underflow");
    }

    return s->contents[--s->top];
}


/***
 * Private implementations
 */
static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
