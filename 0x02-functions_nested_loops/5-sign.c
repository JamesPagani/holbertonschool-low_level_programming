#include "holberton.h"

/**
 * print_sign - Checks the number's sign, prints it and returns a value.
 * @n: Number to evaluate
 *
 * Return: 1 if positive, 0 if zero, -1 if negative, anything else if error
 */

int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		_putchar('+');
		check = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		check = 0;
	}
	else
	{
		_putchar('-');
		check = -1;
	}

	return (check);
}
