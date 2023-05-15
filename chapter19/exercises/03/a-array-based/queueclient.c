/*
 * C programming: A Modern Approach. Chapter 19, exercise 03
 * Date: May 2023
 * Description: Queue data structure client test file. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "../queue.h"

int main()
{
    Queue q = allocate_queue();
    Queue w = allocate_queue();
    Item i;

    enqueue(2, q);
    puts("Enqueue 2");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    enqueue(3, q);
    puts("Enqueue 3");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    enqueue(5, q);
    puts("Enqueue 5");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    printf("Number of elements in q: %d\n\n", notempty_queue(q));

    dequeue(q);
    puts("Dequeue 2");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    enqueue(1, q);
    puts("Enqueue 1");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    dequeue(q);
    puts("Dequeue 3");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    dequeue(q);
    puts("Dequeue 5");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    enqueue(8, q);
    puts("Enqueue 8");
    printf("First in q: %d\n", peek(q));
    printf("Last in q: %d\n", rear(q));
    puts("");

    printf("Number of elements in q: %d\n\n", notempty_queue(q));

    if (!notempty_queue(w))
    {
        puts("w is empty");
    }
    else
    {
        puts("w not empty");
    }

    while(notempty_queue(q))
    {
        i = peek(q);
        dequeue(q);
        enqueue(i, w);
    }

    if (!notempty_queue(q))
    {
        puts("q is empty");
    }
    else
    {
        puts("q not empty");
    }
    puts("");

    printf("First in w: %d\n", peek(w));
    printf("Last in w: %d\n", rear(w));

    deallocate_queue(q), deallocate_queue(w);

    exit(EXIT_SUCCESS);
}
