#include "holberton.h"

/**
 * print_square - Prints a square made out of hashtags (#).
 * @size: Size of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
