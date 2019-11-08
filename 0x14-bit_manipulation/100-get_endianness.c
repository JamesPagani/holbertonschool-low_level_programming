#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - Determines the endianness of the machine
 * Return: 1 if Little endian, 0 if Big endian
 */

int get_endianness(void)
{
	int test = 0x11223344;
	char *spotter = (char *) &test;

	if (*spotter == 44)
		return (0);
	return (1);
}
