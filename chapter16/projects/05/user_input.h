#ifndef USER_INPUT_H
#define USER_INPUT_H

/*
 * Reads and stores at most `n` characters from stdin into `str`, discarding 
 * any leading tabs or white spaces until the next occurrence of a newline, 
 * space, tab, or EOF.
 * If no characters were read, `str` is set null , and -1 is returned.
 * Otherwise, `str` is null-terminated and its length (excluding the 
 * terminating null byte) is returned.
 */
int read_stdin(char *str, int n);

#endif
