/*
 * C programming: A Modern Approach. Chapter 03, Project 03
 * Date: January 2023
 * Description: Breaks down an ISBN entered by the user.
 */

#include<stdio.h>

int main(void)
{
    int GSI_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI_prefix, &group_identifier, &publisher_code, 
                                                  &item_number, &check_digit);

    printf("\nGSI prefix: %d\n", GSI_prefix);
    printf("Group identifier: %1d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
