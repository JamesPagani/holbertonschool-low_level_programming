#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/* Holberton's putchar */
int _putchar(char c);

/* 0x0F functions for tasks 0 to 2 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/* 0x0F functions for task 3 */


#endif
