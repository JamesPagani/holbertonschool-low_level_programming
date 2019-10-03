#include "holberton.h"

/**
 * _strncat - Concatenates a string up to the n byte
 * @dest: String to concatenate
 * @src: String used to concatenate
 * @n: Amount of bytes to concatenate
 *
 * Return: Destination string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest;
	int count_src;

	count_dest = 0;
	count_src = 0;

	while (*(dest + count_dest) != '\0')
	{
		count_dest++;
	}

	while (*(src + count_src) != '\0' && count_src < n)
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
		count_src++;
	}

	*(dest + count_dest) = '\0';

	return (dest);
}
