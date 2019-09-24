#include "holberton.h"

/**
 * _abs - Prints the absolute value of a number
 * @n: Number to print the absolute value
 *
 * Return: Absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
