#include "holberton.h"
/**
 *  _puts_recursion - Prints a string
 * @s: Array of characters to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar(10);
	}
}
