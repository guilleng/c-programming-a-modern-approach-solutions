#ifndef RUN_LENGTH_ENCODING_H
#define RUN_LENGTH_ENCODING_H

#include <stdio.h>
#include <string.h>

#define EXTENSION ".rle"

void rle_encode(FILE *fp_in, FILE *fp_out);
void rle_decode(FILE *fp_in, FILE *fp_out);

/* 
 * Returns zero if `name` has `.rle` extension.
 */
int is_decoded(const char *name);

#endif
