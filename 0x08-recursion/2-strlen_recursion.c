#include "holberton.h"
/**
 * _strlen_recursion - Counts the length of a string (NULL char not included)
 * @s: Input string
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s + 1));
}
