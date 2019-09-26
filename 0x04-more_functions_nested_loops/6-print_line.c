#include "holberton.h"

/**
 * print_line - Prints a line of n length
 * @n: Length of the line
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count ++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
