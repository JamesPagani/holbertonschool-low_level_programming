#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an integer array and fills it with specified numbers
 * @min: Lowest integer
 * @max: Max integer
 * Return: Pointer to the integer array
 */

int *array_range(int min, int max)
{
	int *out;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;
	out = malloc(size * sizeof(int));
	if (out == NULL)
		return (NULL);

	for(i = 0; i < size && i + min <= i + max; i++)
	{
		out[i] = min + i;
	}

	return (out);
}
