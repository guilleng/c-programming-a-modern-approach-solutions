#ifndef X_READLINE_H
#define X_READLINE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Reads a line of input from `stdin` and stores it in the buffer pointed to by 
 * `s`, ensuring that at most `size - 1` characters are stored and adding a 
 * null-terminator.
 * If the input line exceeds `size - 1` characters, the excess characters are 
 * discarded.
 * Returns the pointer to the modified buffer `s` on success, if an error occurs 
 * returns `NULL`.
 *
 * Parameters:
 *   - s: A pointer to the buffer where the input line will be stored.
 *   - size: The maximum number of characters (including the null-terminator) 
 *   that can be stored in `s`.
 */
char *x_readline(char *s, size_t size);

#endif
