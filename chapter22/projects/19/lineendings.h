#ifndef LINENDINGS_H
#define LINENDINGS_H

/*
 * Sets the size in bytes of the buffer used to read the input file
 */
#define BUF_SIZE 1024

/*
 * Detects whether input_stream has CRLF or NL line endings and writes the 
 * opposite to the output stream.
 * Returns output_stream on success, NULL on failure;
 */
FILE *convert_file(FILE *input_stream, FILE *output_stream);

#endif
