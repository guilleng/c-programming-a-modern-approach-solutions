/*
 * C programming: A Modern Approach. Chapter 19, Project 06
 * Date: May 2023
 * Description: Dynamically allocated array-based circular queue implementation
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/***
 * Private declarations
 */

/* 
 * Completing the declaration for a `Queue` type:
 *
 * A `Queue` is a structure whose members are:
 *   A dynamically allocated array of void pointers.   
 *   The index of the last item that arrived in the queue.
 *   The index of the first item that arrived in the queue.
 *   The number of elements currently in the queue.
 *   The maximum length of the queue.
 */
struct queue_struct {
    void **queue;
    size_t tail;
    size_t head;
    size_t nelems;
    size_t maxlen;
};


/*** 
 * Interface implementations
 */
Queue allocate_queue(size_t len)
{
    struct queue_struct *new;
    void **q;

    new = malloc(sizeof(struct queue_struct));
    if (new == NULL)
    {
        fprintf(stderr, "Allocation for queue_struct failed");
        return NULL;
    }

    q = malloc(sizeof(void *) * len);
    if (q == NULL)
    {
        fprintf(stderr, "Allocation for (void *) array failed");
        return NULL;
    }

    new->queue  = q;
    new->tail   = 0;
    new->head   = 0;
    new->nelems = 0;
    new->maxlen = len;

    return new;
}

void deallocate_queue(Queue q)
{

    free(q->queue);
    free(q);
}

void enqueue(void *i, Queue q)
{

    if (q->nelems == q->maxlen)
    {
        fprintf(stderr, "enqueue() on full queue\n");
        return;
    }

    if (q->nelems == 0)
    {
        q->queue[q->head] = i;
        q->nelems++;
        return;
    }

    q->tail = (q->tail == q->maxlen-1) ? 0 : (q->tail + 1);
    q->queue[q->tail] = i;
    q->nelems++;

    return;
}

void dequeue(Queue q)
{

    if (q->nelems)
    {
        q->head = (q->head == q->maxlen-1) ? 0 : (q->head + 1);
        q->nelems--;
        return;
    }
    fprintf(stderr, "dequeue() on empty queue\n");
    return;
}

void *peek_first(Queue q)
{

    if (q->nelems)
    {
        return q->queue[(q->head)];
    }
    fprintf(stderr, "peek_first() on empty queue\n");

    return NULL;
}

void *peek_rear(Queue q)
{

    if (q->nelems)
    {
        return q->queue[q->tail];
    }
    fprintf(stderr, "peek_rear() on empty queue\n");

    return NULL;
}

int isempty_queue(Queue q)
{

    return q->nelems;
}
