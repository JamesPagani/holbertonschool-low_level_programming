#include "holberton.h"

/**
 * print_rev - Prints a string backwards
 * @s: The string to print backwards
 *
 * Return: nothing
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
