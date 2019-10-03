#include "holberton.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to half print
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int size;
	int count;

	size = 0;

	while (*(str + size) != '\0')
	{
		size++;
	}

	if (size % 2 != 0)
		count = size / 2 + 1;
	else
		count = size / 2;

	while (count < size)
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
