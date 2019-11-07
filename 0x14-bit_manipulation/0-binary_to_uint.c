#include "holberton.h"
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(const char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * _pow - Delivers the result of a number x to the power of y
 * @x: Base
 * @y: Exponent
 * Return: x to the power of y. If y is lower than 0, it returns -1.
 */
unsigned int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}


/**
 * binary_to_uint - Convers a binary number to unsigned int
 * @b: The binary "number" (it is passed as a string)
 * Return: The converted number or 0 if an invalid bit was found
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int lngt = _strlen(b);
	int exp = lngt - 1;

	if (b == NULL)
		return (0);

	while (*(b + i) != '\0')
	{
		if (*(b + i) == '1')
			num += _pow(2, exp);
		else if (*(b + i) != '0')
			return (0);
		i++;
		exp--;
	}
	return (num);
}
