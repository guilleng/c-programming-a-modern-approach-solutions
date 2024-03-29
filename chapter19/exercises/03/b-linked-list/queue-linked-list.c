/*
 * C programming: A Modern Approach. Chapter 19, Exercise 03
 * Date: May 2023
 * Description: Linked list queue implementation. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "../queue.h"

/***
 * Private declarations
 */

/* 
 * Completing the declaration for a `Queue` type:
 *
 * A `Queue` is a structure whose members are:
 *   The number of elements currently in the linked list. 
 *   Pointers to the tail (last arrived) and head (first arrived) elements in a
 *   linked list of `Items`.
 */
struct queue_struct {
    size_t nelems;
    struct node *tail;
    struct node *head;
};

/* linked list implementation */
struct node {
    Item data;
    struct node *next;
};

/* malloc wrapper, terminates program on allocation failure */
static void *x_malloc(size_t size, const char* str);


/*** 
 * Interface implementations
 */
Queue allocate_queue(void)
{
    struct queue_struct* new;

    new = x_malloc(sizeof(struct queue_struct), "queue_struct");

    new->tail = new->head = NULL;
    new->nelems = 0;

	return new;
}

void deallocate_queue(Queue q)
{

    while (q->nelems)
    {
        dequeue(q);
    }

    return;
}

void enqueue(Item i, Queue q)
{
    struct node *new = x_malloc(sizeof(struct node), "struct node");

    new->data = i;
    new->next = NULL;

    if (q->nelems == 0)
    {
        q->head = q->tail = new;
    }
    else
    {
        (q->tail)->next = new;
        q->tail = new;
    }
    q->nelems++;

    return;
}

void dequeue(Queue q)
{

    if (q->nelems != 0)
    {
        struct node *temp = q->head;

        if (q->nelems == 1)
        {
            q->head = q->tail = NULL;
        }
        else
        {
            q->head = ((q->head)->next);
        }

        free(temp);
        q->nelems--;

        return;
    }

    fprintf(stderr, "dequeue() on empty queue\n");
    return;
}

Item peek_first(Queue q)
{

    if (q->nelems == 0)
    {
        fprintf(stderr, "peek() on empty queue\n");
        return -1;
    }

    return (q->head)->data;
}


Item peek_rear(Queue q)
{
    if (q->nelems == 0)
    {
        fprintf(stderr, "rear() on empty queue\n");
        return -1;
    }

    return (q->tail)->data;
}

int isempty_queue(Queue q)
{

    return q->nelems;
}


/***
 * Private implementations
 */

static void *x_malloc(size_t size, const char* str)
{
    void *new = malloc(size);

    if (new == NULL)
    {
        fprintf(stderr, "%s allocation failed.\n", str);
        exit(EXIT_FAILURE);
    }

    return new;
}
