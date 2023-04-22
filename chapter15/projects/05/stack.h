#ifndef STACK_H
#define STACK_H

/*
 * Frees the stack array.
 */
void make_empty(void);

/*
 * Returns true if the stack is empty
 */
bool is_empty(void);

/*
 * Returns true if the stack is full
 */
bool is_full(void);

/*
 * Pushes an item into the stack
 */
void push(int item);

/*
 * Pops an item from the stack
 */
int pop(void);

#endif
