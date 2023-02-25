/*
 * C programming: A Modern Approach. Chapter 06, Project 09
 * Date: February 2023
 * Author: ffstlln
 * Description: Given a loan, an interest rate, a monthly payment and the number
 *              of payments, displays the balance remaining.
 */

#include <stdio.h>

int main(void)
{
    float total, rate, payment;
    int payment_n;

    printf("Enter amount of loan: ");
    scanf("%f", &total);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &payment_n);

    rate = (rate / 12.0f) / 100.0f;

    for(int i = 1; i <= payment_n; i++)
    {
        total = total - payment + (total * rate);
        printf("Balance remaining after payment number %d: $%.2f\n", i, total); 
    }

    return 0;
}
