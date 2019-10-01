#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers via pointers
 * @a: Pointer to an int 1
 * @b: Pointer to an int 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
