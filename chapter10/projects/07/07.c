/*
 * C programming: A Modern Approach. Chapter 10, Project 07
 * Date: March 2023
 * Description: Simulates a seven-segment display for digits 0-9.
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define HEIGHT      3
#define LENGHT      4

const int segments[10][7] = { { 1, 1, 1, 1, 1, 1, 0 },  /* 0 */ 
                              { 0, 1, 1, 0, 0, 0, 0 },  /* 1 */ 
                              { 1, 1, 0, 1, 1, 0, 1 },  /* 2 */
                              { 1, 1, 1, 1, 0, 0, 1 },  /* 3 */
                              { 0, 1, 1, 0, 0, 1, 1 },  /* 4 */
                              { 1, 0, 1, 1, 0, 1, 1 },  /* 5 */
                              { 1, 0, 1, 1, 1, 1, 1 },  /* 6 */
                              { 1, 1, 1, 0, 0, 0, 0 },  /* 7 */
                              { 1, 1, 1, 1, 1, 1, 1 },  /* 8 */
                              { 1, 1, 1, 1, 0, 1, 1 } };/* 9 */

/* 
 * Each digit character is three characters high (not four as in the project
 * description), and four long (three significant plus a space for readability). 
 */
char digits[HEIGHT][MAX_DIGITS * LENGHT];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    int i = 0;
    printf("Enter a number: ");

    clear_digits_array();
    while (1)
    {
        char digit = getchar();
        if (isdigit(digit))
        {
            process_digit(digit, i);
            i++;
        }
        if (i >= MAX_DIGITS || digit == '\n')
        {
            break;
        }
    }

    print_digits_array();
    putchar('\n');
    return 0;
}

/*
 * Stores blank characters into all elements of the `digits` array
 */
void clear_digits_array(void)
{
    int rows, cols;
    for (rows = 0; rows < HEIGHT; rows++)
    {
        for (cols = 0; cols < MAX_DIGITS * LENGHT; cols++)
        {
            digits[rows][cols] = ' ';
        }
    }
    return;
}

/*
 * Stores the seven-segment representation of `digit` into a specified position
 * in the `digits` array by testing whether the segment is 'on' or 'off' for a
 * given `digit`(row) of the constant `Segments` array.  
 */                                                     /* segments:        */
void process_digit(int digit, int position)             /*          _0_     */
{                                                       /*       5 |   | 1  */
    int rows,                                           /*         |_6_|    */
        cols = position * LENGHT;                       /*       4 |   | 2  */
                                                        /*         |_3_|    */
    digit   -= '0';                               
                                                        /* digits[r][c]:    */ 
    for (rows = 0; rows < HEIGHT; rows++)               /*         0123     */
    {                                                   /*       0  _       */
        switch (rows)                                   /*       1 |_|      */
        {                                               /*       2 |_|      */
            case 0:
                digits[rows][cols + 1] = segments[digit][0] ? '_' : ' ';
                break;
            case 1:
                digits[rows][cols + 0] = segments[digit][5] ? '|' : ' ';
                digits[rows][cols + 1] = segments[digit][6] ? '_' : ' ';
                digits[rows][cols + 2] = segments[digit][1] ? '|' : ' ';
                break;
            case 2:
                digits[rows][cols + 0] = segments[digit][4] ? '|' : ' ';
                digits[rows][cols + 1] = segments[digit][3] ? '_' : ' ';
                digits[rows][cols + 2] = segments[digit][2] ? '|' : ' ';
                break;
            default:
                break;  
        }               
    }                   
}                       
                        
/*                      
 * Displays the rows of the `digits` array, each on a single line, producing 
 * output such as that shown in the example
 */                     
void print_digits_array( void)
{                       
    int rows, cols;
    for (rows = 0; rows < HEIGHT; rows++)
    {
        for (cols = 0; cols < MAX_DIGITS * LENGHT; cols++)
        {
            putchar(digits[rows][cols]);
        }
        putchar('\n');
    }
    return;
}
