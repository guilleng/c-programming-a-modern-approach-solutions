/*
 * C programming: A Modern Approach. Chapter 20, Project 01
 * Date: May 2023
 * Description: Type punning on IEEE Standard for Floating-Point Arithmetic
 */

#include <stdio.h>

struct IEEE_float {
    unsigned int fraction : 23;
    unsigned int exponent : 8;
    unsigned int sign : 1;
};

union punning_union {
    struct IEEE_float float_value;
    float value;
};


/*
 * Prints the binary representation of a given memory location.
 *
 * Parameters:
 *   - n: A pointer to the memory location to print.
 *   - nbytes: The number of bytes to print (up to 8).
 *
 * The function iterates over each bit in the memory location and displays its 
 * binary value. It starts with the most significant bit and shifts a mask to 
 * the right for each subsequent bit.
 * The function prints '1' if the corresponding bit is set, and '0' otherwise.
 * After every 4 bits (nibble), a space is added for readability.
 */
void print_binary(size_t *n, size_t nbytes);

int main(void)
{
    struct IEEE_float f; 
    union punning_union u;

    f.sign = 1;
    f.exponent = 128;
    f.fraction = 0;

    u.float_value = f;

    printf("%f\n", u.value);

    print_binary((size_t *)&u, sizeof(u));

    printf("^^        ^____________________________  fraction\n"
           "||_______  exponent\n"
           "|_  sign\n");

    return 0;
}

void print_binary(size_t *n, size_t nbytes)
{
    size_t i;
    unsigned long mask;  
    /* The mask aids to start with the most significant bit */

    switch (nbytes)
    {
        case 1: mask = 0x80;               break;
        case 2: mask = 0x8000;             break;
        case 3: mask = 0x800000;           break;
        case 4: mask = 0x80000000;         break;
        case 8: mask = 0x8000000000000000; break;
        default:                           break;
    }

    for (i = 0; i < nbytes * 8; i++) 
    {
        putchar((*n & mask) ? '1' : '0');
        if (i % 4 == 3) 
        {
            putchar(' ');  /* Add space after each 4 bits (nibble) */
        }
        mask >>= 1;        /* Shift the mask to the right for the next bit */
    }
    putchar('\n');

    return;
}
