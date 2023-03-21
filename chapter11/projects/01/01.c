/*
 * C programming: A Modern Approach. Chapter 11, Project 01
 * Date: March 2023
 * Description: Decomposes a dollar amount into the smallest number of number 
 *              of $20, $10, $5 and $1 bills.
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int total, twenty_bills, ten_bills, five_bills, one_bills;

    printf("Enter a dollar amount: ");
    scanf("%d", &total);

    pay_amount(total, &twenty_bills, &ten_bills, &five_bills, &one_bills);
    
    printf("$20 bills: %d\n$10 bills: %d\n$ 5 bills: %d\n$ 1 bills: %d\n", 
            twenty_bills, ten_bills, five_bills, one_bills);

    return 0;
}

/*
 * Stores the smallest amount of 20's, 10's, 5's and 1's bills that add to the
 * `dollars` quantity in the homonymous referenced variables received as 
 * arguments. 
 */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;
    
    *ones = dollars;
    return;
}
