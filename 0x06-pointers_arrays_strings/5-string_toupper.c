#include "holberton.h"

/**
 * _string_toupper - Turns all alphabetic characters in a string to uppercase
 * @src: Source string
 *
 * Return: Uppercased string
 */

char *string_toupper(char *src)
{
	int count;

	count = 0;

	while (*(src + count) != '\0')
	{
		if (*(src + count) >= 'a' && *(src + count) <= 'z')
		{
			*(src + count) = *(src + count) - 32;
		}
		count++;
	}

	return (src);
}
