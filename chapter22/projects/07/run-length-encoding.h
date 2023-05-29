#ifndef RUN_LENGTH_ENCODING_H
#define RUN_LENGTH_ENCODING_H

#define EXTENSION ".rle"

void rle_encode(FILE *fp_in, FILE *fp_out);
void rle_decode(FILE *fp_in, FILE *fp_out);

/* 
 * Returns nonzero if `name` is set as encoded by its extension.
 */
int is_encoded(const char *name);

#endif
