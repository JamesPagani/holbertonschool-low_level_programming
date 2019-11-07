#include "holberton.h"
/**
 * clear_bit - Sets a specific bit to 0
 * @n: Number to edit
 * @index: Bit index to edit
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int check;

	if (index > 63)
		return (-1);

	check = 1 << index;
	if (*n & check)
		*n = *n ^ check;

	return (1);
}
