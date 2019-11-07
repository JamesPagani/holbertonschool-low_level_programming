#include "holberton.h"
/**
 * print_binary - Prints the binary of a given unsigned integer
 * @n: Input number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int shift = (8 * sizeof(unsigned long int)) - 1;
	unsigned long int i = 1;
	int c_check = 0;

	for (i = i << shift; i != 0; i = i >> 1)
	{
		if (i & n)
		{
			_putchar('1');
			c_check = 1;
		}
		else
		{
			if (c_check)
				_putchar('0');
		}
	}

	if (!c_check)
		_putchar('0');
}
