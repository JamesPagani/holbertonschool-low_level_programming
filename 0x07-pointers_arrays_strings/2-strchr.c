#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: Source string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurence to the character (NULL if not found)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == '\0')
	{
		return('\0');
	}
	return (s);
}
