#include "holberton.h"

/**
 * _memcpy - Copies bytes from a memory area to another
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Amount of bytes to copy from src
 *
 * Return: Pointer to destination area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
