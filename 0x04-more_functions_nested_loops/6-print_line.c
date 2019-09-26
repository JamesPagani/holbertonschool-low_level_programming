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
		_putchar(10);
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
