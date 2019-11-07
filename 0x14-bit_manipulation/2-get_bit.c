#include "holberton.h"
/**
 * get_bit - Gets the bit at the specified bit index
 * @n: Input number
 * @index: Bit index to check
 * Return: The bit (either a 1 or 0) or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index > 63)
		return (-1);

	check = 1 << index;
	if (n & check)
		return (1);
	return (0);
}
