#include "holberton.h"

/**
 * _strncpy - Copies the  string from a source, up to n bytes, to a destination
 * @dest: Destination string
 * @src: Source string
 * @n: Amount of bytes to copy
 *
 * Return: Destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count_dest;
	int count_src;

	count_dest = 0;
	count_src = 0;

	while (*src != '\0' && count_src < n)
	{
		*(dest + count_dest) = *src;
		src++;
		count_src++;
		count_dest++;
	}

	while (count_src < n)
	{
		*(dest + count_dest) = '\0';
		count_src++;
		count_dest++;
	}

	return (dest);
}
