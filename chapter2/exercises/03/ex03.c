/*
 * Project: C programming: A Modern Approach. Chapter 02, exercise 03
 * Date: January 2023
 * Description: Computes the dimensional weight of a 12" x 10" x 8" box.
 */

#include <stdio.h>

int main(void)
{
    int height = 8;
    int length = 12; 
    int width = 10;
    int volume = length * width * height;
    
    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
