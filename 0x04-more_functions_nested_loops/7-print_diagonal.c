#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line of n length
 * @n: Length of the diagonal line
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != i)
				{
					_putchar(32);
				}
				else
				{
					_putchar(92);
				}
			}
			_putchar(10);
		}
	}
}
