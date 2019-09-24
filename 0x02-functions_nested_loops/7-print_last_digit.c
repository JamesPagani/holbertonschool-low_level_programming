#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of the given number
 * @n: Number to extract its last digit
 *
 * Return: Last digit of the number
 */

int print_last_digit(int n)
{
	int out = n % 10;

	if (out < 0)
		out = -out;

	_putchar(out + '0');
	return (out);
}
