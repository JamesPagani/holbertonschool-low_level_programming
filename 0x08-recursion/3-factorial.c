#include "holberton.h"

/**
 * factorial - Prints the factorial of a number
 * @n: Number to get it's factorial
 * Return: Factorial number of n. If n is zero, it returns 1. If n is lower than
 * zero, returns -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (factorial(n) * factorial(n - 1));
}
