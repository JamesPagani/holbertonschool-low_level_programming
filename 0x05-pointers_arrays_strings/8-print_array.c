#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n amount of elements of a int array
 * @a: An array of integers
 * @n: Amount of elements to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		count++;
		if (count != n)
			printf(", ");
	}
	printf("\n");
}
