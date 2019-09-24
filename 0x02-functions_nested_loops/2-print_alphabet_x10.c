#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times (each in a new line)
 *
 * Return: 0 (if successful)
 */

void print_alphabet_x10(void)
{
	int ch;
	int count = 0;

	while (count < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar(10);
		count++;
	}

}
