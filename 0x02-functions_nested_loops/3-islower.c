#include "holberton.h"

/**
 *  _islower - Checks if the character introduced is lowercase or not
 * @c: The character to check
 *
 * Return: 1 if c is lowercase
 * If not, return 0
 */

int _islower(int c)
{
	int check;

	if (c >= 97  && c <= 122)
		check = 1;
	else
		check = 0;

	return (check);

}
