#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String where to append
 * @src: String to append
 *
 * Return: Concatenaded string
 */

char *_strcat(char *dest, char *src)
{
	int count_dest;
	int count_src;

	count_dest = 0;
	count_src = 0;

	while (*(dest + count_dest) != '\0')
	{
		count_dest++;
	}

	while (*(src + count_src) != '\0')
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
		count_src++;
	}

	*(dest + count_dest) = '\0';

	return (dest);
}
