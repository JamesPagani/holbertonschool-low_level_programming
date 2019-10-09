#include "holberton.h"
/**
 * _pow_recursion - Delivers the result of a number x to the power of y
 * @x: Base
 * @y: Exponent
 * Return: x to the power of y. If y is lower than 0, it returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
