/*
 * C programming: A Modern Approach. Chapter 19, Exercise 03
 * Date: May 2023
 * Description: Array-based circular queue implementation
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
 *   The index of the last item that arrived in the queue.
 *   The index of the first item that arrived in the queue.
 *   The number of elements currently in the queue.
 *   An array of `Items` of fixed size defined in the interface using a 
 *   preprocessor directive.   
 */
struct queue_struct {
    size_t tail;
    size_t head;
    size_t nelems;
    Item queue[QUEUE_SIZE];
};


/*** 
 * Interface implementations
 */
Queue allocate_queue(void)
{
    struct queue_struct* new;

    new = malloc(sizeof(struct queue_struct));
    if (new == NULL)
    {
        fprintf(stderr, "Allocation for queue_struct failed");
    }

    new->tail = 0;
    new->head = 0;
    new->nelems = 0;

	return new;
}

void deallocate_queue(Queue q)
{

    free(q);
}

void enqueue(Item i, Queue q)
{

    if (q->nelems == QUEUE_SIZE)
    {
        fprintf(stderr, "Full queue in enqueue call\n");
        return;
    }

    if (q->nelems == 0)
    {
        q->queue[q->head] = i;
        q->nelems++;
        return;
    }

    q->tail = (q->tail == QUEUE_SIZE-1) ? 0 : (q->tail + 1);
    q->queue[q->tail] = i;
    q->nelems++;

    return;
}

void dequeue(Queue q)
{

    if (q->nelems)
    {
        q->head = (q->head == QUEUE_SIZE-1) ? 0 : (q->head + 1);
        q->nelems--;
        return;
    }
    fprintf(stderr, "Dequeueing on an empty queue\n");

    return;
}

Item peek_first(Queue q)
{

    if (q->nelems)
    {
        return q->queue[(q->head)];
    }
    fprintf(stderr, "peek() on empty queue\n");

    return -1;
}


Item peek_rear(Queue q)
{
    if (q->nelems)
    {
        return q->queue[q->tail];
    }
    fprintf(stderr, "rear() on empty queue\n");

    return -1;
}

int isempty_queue(Queue q)
{
    return q->nelems;
}
