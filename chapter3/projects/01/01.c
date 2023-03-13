/*
 * C programming: A Modern Approach. Chapter 03, Project 01
 * Date: January 2023
 * Description: Prompts user for a date and prints it reformatted.
 */

#include<stdio.h>

int main(void)
{
    int mm,dd,yyyy;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("You entered the date %.4d%.2d%.2d", yyyy, mm, dd);

    return 0;
} 
