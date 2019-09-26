#include "holberton.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 (save from 2 and 4)
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			continue;
		else
			_putchar(ch);
	}

	_putchar(10);
}
