#ifndef QUICKSORT_H
#define QUICKSORT_H

/*
 * Sorts in-place the slice going from the markers `low` to `high` the integer 
 * array `a` using quicksort. 
 */
void quicksort(int a[], int low, int high);

/*
 * Partitions the integer array a from `low` to `high` in two parts:
 * + Elements less than or equal to the pivot.
 * + Elements greater than the pivot.
 * Returns the index of the pivot after the partitioning is done.
 */
int split(int a[], int low, int high);

#endif
