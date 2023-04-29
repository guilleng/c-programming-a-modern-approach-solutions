#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "inventory.h"

/*
 * Sorts in-place by part number the slice going from the markers `low` to 
 * `high` the structure array `a` using quicksort. 
 */
void quicksort(struct part a[], int low, int high);

/*
 * Partitions the integer array a from `low` to `high` in two parts:
 * + Elements less than or equal to the pivot's part number.
 * + Elements greater than the pivot's part number.
 * Returns the index of the pivot after the partitioning is done.
 */
int split(struct part a[], int low, int high);

#endif
