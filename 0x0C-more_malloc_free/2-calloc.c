#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory space and returns a pointer to that direction
 * @nmemb: Number of elements to store
 * @size: Data type of the elements
 * Return: Pointer to the allocated memory space
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	int i;
	void *out;

	if (nmeb == 0 || size == 0)
		return (NULL);

	out = malloc(nmeb * size);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < nmeb; i++)
	{
		out[i] = 0;
	}
	return (out);
}
