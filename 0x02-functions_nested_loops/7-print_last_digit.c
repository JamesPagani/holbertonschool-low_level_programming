#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of the given number
 * @n: Number to extract its last digit
 *
 * Return: Last digit of the number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;

	_putchar((n % 10) + 48);
	return (n % 10);
}
