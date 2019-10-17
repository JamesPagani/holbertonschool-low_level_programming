#include "holberton.h"
#include <stdlib.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: Where to fill
 * @b: Byte used to fill
 * @n: How many bytes to fill
 *
 * Return: Pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
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

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *arr;

	if (nmeb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmeb * size);
	if (arr == NULL)
		return (NULL);

	arr = _memset(arr, 0, size);
	return (arr);
}
