/*
 * C programming: A Modern Approach. Chapter 08, Project 02
 * Date: February 2023
 * Description: Counts the occurrences of each digit positive integer. 
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_counts[10] = { 0 },
        digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        digit_counts[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\nOccurrences:\t");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", digit_counts[i]);
    }
    printf("\n");

    return 0;
}
