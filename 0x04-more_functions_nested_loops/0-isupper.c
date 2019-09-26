#include "holberton.h"

/**
 * _isupper - Checks is the character is uppercase
 * @c: Character to be checked
 *
 * Return: 1 if c is uppercase, 0 if not. Anything else if error
 */

int _isupper(int c)
{
	int out;

	if (c >= 65 && c <= 90)
		out = 1;
	else
		out = 0;

	return (out);
}
