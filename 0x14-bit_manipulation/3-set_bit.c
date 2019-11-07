#include "holberton.h"
/**
 * set_bit - Sets a specified bit to 1
 * @n: Number to edit
 * @index: Bit index to turn
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int check;

	if (index > 63)
		return (-1);

	check = 1 << index;

	(void) index;
	*n = *n | check;
	return (1);
}
