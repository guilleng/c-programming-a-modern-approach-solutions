/*
 * C programming: A Modern Approach. Chapter 19, Exercise 03
 * Date: May 2023
 * Description: Queue interface
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>

typedef struct queue_struct* Queue;

/*
 * Creates an object of type `Queue` with size `len`
 * Returns a Queue on success, NULL on failure.
 */
Queue allocate_queue(size_t len);

/*
 * Destroys an object of type `Queue`
 */
void deallocate_queue(Queue q);

/*  
 * Inserts an item at the end of a `Queue` 
 */
void enqueue(void *i, Queue q);

/*
 * Removes the item from the beginning of a `Queue`  
 */
void dequeue(Queue q);

/*
 * Returns the first item in a `Queue` (without changing the queue)  
 */
void *peek_first(Queue q);

/*
 * Returns the last item in a `Queue` (without changing the queue)  
 */
void *peek_rear(Queue q);

/*
 * Returns the number of elements in a `Queue`
 */
int isempty_queue(Queue q);

#endif
