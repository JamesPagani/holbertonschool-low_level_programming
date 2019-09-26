#include "holberton.h"

/**
 * print_triangle -  Prints a triangle using the hashtag symbol (#)
 * @size: The size of the triangle (in lines used)
 *
 * Return: Nothing
 */

void print_triangle(int size)
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
				if (j < size - i - 1)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar(10);
		}
	}
}
