#include "holberton.h"
#include <stdlib.h>
/**
 * _zero_memory - Fills memory with a constant byte (fills it with zeroes)
 * @s: Where to fill
 * @b: Byte used to fill
 * @n: How many bytes to fill
 *
 * Return: Pointer to the filled memory area
 */

char *_zero_memory(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


/**
 * _calloc - Allocates memory space and returns a pointer to that direction
 * @nmeb: Number of elements to store
 * @size: Data type of the elements
 * Return: Pointer to the allocated memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	arr = _zero_memory(arr, 0, size);
	return (arr);
}
