/*
 * C programming: A Modern Approach. Chapter 20, exercise 06
 * Date: May 2023
 * Description: Swaps the leftmost byte for the rightmost byte of a two-byte 
 *              number.
 */

#include <stdio.h>

unsigned short swap_bytes(unsigned short i);
unsigned short swap_bytes_one_line(unsigned short i);

int main(void)
{
    unsigned short n;
    printf("Enter a hexadecimal number (up to four digits):\n0x");
    scanf("%hx", &n);
    puts("");

    printf("Number with bytes swapped:\n0x%hX\n", swap_bytes(n));
    printf("Number with bytes swapped:\n0x%hX\n", swap_bytes_one_line(n));
    return 0;
}

unsigned short swap_bytes(unsigned short i) 
{
    unsigned short j = i << 8;
    i >>= 8;
    return j | i;
}

unsigned short swap_bytes_one_line(unsigned short i)
{
    return (i << 8) | (i >> 8);
}
