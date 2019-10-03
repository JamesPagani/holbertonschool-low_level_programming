#include "holberton.h"

/**
 * _strcpy - Copies the string from a source to a destination
 * @dest: Where to copy the string
 * @src: String to copy
 *
 * Return: dest's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (*src != '\0')
	{
		*(dest + count) = *src;
		src++;
		count++;
	}
	*(dest + count) = '\0';

	return (dest);
}
