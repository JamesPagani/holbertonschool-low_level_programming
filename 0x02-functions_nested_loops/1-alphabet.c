#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet (lowercase)
 *
 * Return: 0 (if successful)
 */

void print_alphabet(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}

	_putchar(10);

}
