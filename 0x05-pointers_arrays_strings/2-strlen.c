#include "holberton.h"

/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
