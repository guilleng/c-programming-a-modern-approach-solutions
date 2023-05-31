#ifndef TOKENS_H
#define TOKENS_H

/* 
 * Evaluates to true if `ch` represents a valid operator
 */
#define isoperator(ch) (((ch) == '*') || ((ch) == '+') ||                      \
                        ((ch) == '-') || ((ch) == '/') || ((ch) == '='))

/*
 * Reads at most `len` characters from stdin and stores they into the `token`
 * buffer if and only if it is a string representing one of the following: 
 * + positive integer
 * + zero
 * + equal sign '='
 * + plus sign '+'
 * + minus sign '-'
 * + multiplication sign '*'
 * + quotient sign '/'
 */
int read_token(char *token, int len);

#endif
