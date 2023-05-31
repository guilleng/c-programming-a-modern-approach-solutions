/*
 * C programming: A Modern Approach. Chapter 19, Exercise 01
 * Date: May 2023
 * Description: Queue interface
 */

#ifndef QUEUE_H
#define QUEUE_H

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
Item peek_first(Queue q);

/*
 * Returns the last item in a `Queue` (without changing the queue)  
 */
Item peek_last(Queue q);

/*
 * Returns the number of elements in a `Queue`
 */
int isempty_queue(Queue q);

#endif
