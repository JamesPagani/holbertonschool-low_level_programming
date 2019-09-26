#include "holberton.h"

/**
 * _isdigit - Checks if the character is a digit or not
 * @c: Character to evaluate
 *
 * Return: 1 if number, 0 if not, anything else if errror
 */

int _isdigit(int c)
{
	int out;

	if (c >= 48 && c <= 57)
	{
		out = 1;
	}
	else
	{
		out = 0;
	}

	return (out);
}
