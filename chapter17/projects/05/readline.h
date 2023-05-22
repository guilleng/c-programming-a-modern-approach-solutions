/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

#ifndef READLINE_H
#define READLINE_H

/*
 * Reads from standard input until a newline or EOF. Stores at most n chars in
 * `str` and appends a null terminator at the n+1 position. Returns the number
 * of characters stored in `str` excluding the null terminating byte. 
 */
int read_line(char *str, int n);

#endif
