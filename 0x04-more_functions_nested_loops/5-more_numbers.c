#include "holberton.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times (once per line)
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int ch;

	for (int i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch / 10 != 0)
				_putchar(ch / 10 + '0');

			_putchar(ch % 10 + '0');
		}
		_putchar(10);
	}
}
