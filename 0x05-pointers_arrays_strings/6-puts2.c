#include "holberton.h"

/**
 * puts2 - Prints every other character in a string (odd chars)
 * @str: String to print every other char
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
