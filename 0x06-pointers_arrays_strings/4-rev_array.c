#include "holberton.h"

/**
 * reverse_array - Reverses the contents of an array
 * @a: An integer array
 * @n: The given array's size
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int count;

	for (count = 0; count < n / 2; count++)
	{
		tmp = *(a + count);
		*(a + count) = *(a + (n - 1 - count));
		*(a + (n - 1 - count)) = tmp;
	}
}
