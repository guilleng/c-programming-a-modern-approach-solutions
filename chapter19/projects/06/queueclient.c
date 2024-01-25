/*
 * C programming: A Modern Approach. Chapter 19, exercise 03
 * Date: May 2023
 * Description: Queue data structure client test file. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    char *i;
    Queue q = allocate_queue(3);
    Queue w = allocate_queue(3);

    if(q == NULL)
    {
        puts("failed to allocate queue p");
        exit(EXIT_FAILURE);
    }
    if(w == NULL)
    {
        puts("failed to allocate queue w");
        exit(EXIT_FAILURE);
    }

    enqueue("first", q);
    printf("First in q: %s\n", (char *) peek_first(q));
    printf("Last in q: %s\n", (char *) peek_rear(q));
    puts("");

    enqueue("second", q);
    printf("First in q: %s\n", (char *) peek_first(q));
    printf("Last in q: %s\n", (char *) peek_rear(q));
    puts("");

    puts("third element, fills the queue");
    enqueue("third", q);
    printf("First in q: %s\n", (char *) peek_first(q));
    printf("Last in q: %s\n", (char *) peek_rear(q));
    puts("");

    enqueue("fourth does not fit, should output error", q);

    printf("Number of elements in q: %d\n\n", isempty_queue(q));

    dequeue(q);
    puts("first dequeued");
    printf("First in q: %s\n", (char *) peek_first(q));
    printf("Last in q: %s\n", (char *) peek_rear(q));
    puts("");

    puts("fourth now fits");
    enqueue("fourth", q);
    printf("First in q: %s\n", (char *) peek_first(q));
    printf("Last in q: %s\n", (char *) peek_rear(q));
    puts("");

    printf("Number of elements in q: %d\n\n", isempty_queue(q));

    if (isempty_queue(w))
    {
        puts("w not empty");
    }
    else
    {
        puts("w is empty");
    }

    puts("moving all elements from q to w");
    while(isempty_queue(q))
    {
        i = peek_first(q);
        dequeue(q);
        enqueue(i, w);
    }
    printf("First in w: %s\n", (char *) peek_first(w));
    printf("Last in w: %s\n", (char *) peek_rear(w));

    if (isempty_queue(q))
    {
        puts("q not empty");
    }
    else
    {
        puts("q is empty");
    }

    deallocate_queue(q);
    deallocate_queue(w);

    exit(EXIT_SUCCESS);
}
