#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard library headers */
#include <stdio.h>

/* Required functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Backup functions */
void print_array(int *array, size_t size);

#endif
