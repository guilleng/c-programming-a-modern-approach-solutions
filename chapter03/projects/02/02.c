/*
 * C programming: A Modern Approach. Chapter 03, Project 02
 * Date: January 2023
 * Description: Formats product information entered by the user.
 */

#include<stdio.h>

int main(void)
{
    int item, purchase_mm, purchase_dd, purchase_yyyy; 
    float price;


    printf("Enter iter number: ");
    scanf("%d", &item);
    
    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &purchase_mm, &purchase_dd, &purchase_yyyy);


    printf("\nItem\t\t\t\tUnit\t\t\t\tPurchase\n");
    printf("\t\t\t\tPrice\t\t\t\tDate\n");
    printf("%d\t\t\t\t$%7.2f\t\t\t%d/%d/%d\n", 
            item, price, purchase_mm, purchase_dd, purchase_yyyy);

    return 0;
}
