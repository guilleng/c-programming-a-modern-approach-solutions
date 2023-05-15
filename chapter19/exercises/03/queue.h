/*
 * C programming: A Modern Approach. Chapter 19, Exercise 03
 * Date: May 2023
 * Description: Queue interface
 */

#ifndef QUEUE_H
#define QUEUE_H

/* This macro definition specifies the size of the queue and is only applicable
 * when the implementation uses an array-based approach */
#define QUEUE_SIZE 32

typedef int Item;
typedef struct queue_struct* Queue;

/*
 * Spawns an object of type `Queue`
 */
Queue allocate_queue(void);

/*
 * Destroys an object of type `Queue`
 */
void deallocate_queue(Queue q);

/*  
 * Inserts an item at the end of a `Queue` 
 */
void enqueue(Item i, Queue q);

/*
 * Removes the item from the beginning of a `Queue`  
 */
void dequeue(Queue q);

/*
 * Returns the first item in a `Queue` (without changing the queue)  
 */
Item peek(Queue q);

/*
 * Returns the last item in a `Queue` (without changing the queue)  
 */
Item rear(Queue q);

/*
 * Returns the number of elements in a `Queue`
 */
int notempty_queue(Queue q);

#endif
