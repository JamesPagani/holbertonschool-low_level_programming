#include "holberton.h"

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
