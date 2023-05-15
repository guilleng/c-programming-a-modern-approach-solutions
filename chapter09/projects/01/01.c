/*
 * C programming: A Modern Approach. Chapter 09, Project 01
 * Date: March 2023
 * Description: Sorts an integer list using selection sort.
 */

#include <stdio.h>

#define SIZE 32

void selection_sort(int integer_list[], int size);

int main(void)
{
    int integer_list[SIZE];
    int number_of_entries = 0;

    printf("Enter at most %d integer separated by spaces: ", SIZE);

    for (int i = 0; i < SIZE && (getchar() != '\n'); i++)
    {
       scanf(" %d", &integer_list[i]);
       number_of_entries++;
    }

    selection_sort(integer_list, number_of_entries);

    printf("Sorted list: ");
    for (int i = 0; i < number_of_entries; i++)
    {
        printf("%d ", integer_list[i]);
    }
    printf("\n");

    return 0;
} 

/*
 * Recursive implementation of the selection sort algorithm.
 * Sorts in-place the elements of the array `integer_list`, of size `size`.
 */
void selection_sort(int integer_list[], int size)
{
    if(size == 0)
    {
        return;
    }

    int largest_element_index = 0;

    for (int i = 0; i < size; i++)
    {
        if(integer_list[i] > integer_list[largest_element_index])
        {
            largest_element_index = i;
        }
    }

    int largest_element = integer_list[largest_element_index];
    size--;
    integer_list[largest_element_index] = integer_list[size];
    integer_list[size] = largest_element;

    selection_sort(integer_list, size);
}
