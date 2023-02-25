/*
 * C programming: A Modern Approach. Chapter 02, project 08
 * Date: January 2023
 * Author: ffstlln
 * Description: Calculates remaining balance of a loan after the 1st, 2nd and 
 *              3rd monthly payments.
 */

#include <stdio.h>

int main(void)
{
    float total, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &total);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate = (rate / 12.0f) / 100.0f;

    total = total - payment + (total * rate);
    printf("Balance remaining after first payment: $%.2f\n", total); 
    
    total = total - payment + (total * rate);
    printf("Balance remaining after second payment: $%.2f\n", total); 

    total = total - payment + (total * rate);
    printf("Balance remaining after third payment: $%.2f\n", total); 

    return 0;
}
