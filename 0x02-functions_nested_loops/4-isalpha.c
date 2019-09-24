#include "holberton.h"

/**
 * _isalpha - Checks is the character in question is Alphabetic (a letter)
 * @c: Character to check
 *
 * Return: 1 if alphabetic, 0 if not
 */

int _isalpha(int c)
{
	int check;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		check = 1;
	else
		check = 0;

	return (check);
}
