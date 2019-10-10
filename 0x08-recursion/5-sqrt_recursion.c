#include "holberton.h"

/**
 * _sqrt_finder - Modified version of the _pow_recursion function
 * @x: Base
 * @trgt: Target number
 * Return: The value of x if x power 2 equals to target
 */
int _sqrt_finder(int x, int trgt)
{
	if (x * x == trgt)
		return (x);
	else if (x * x > trgt)
		return (-1);
	return (_sqrt_finder(x + 1, trgt));
}


/**
 * _sqrt_recursion - Gets the square root of a number
 * @n: Input number
 * Return: Square root of the number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	return (_sqrt_finder(2, n));
}
