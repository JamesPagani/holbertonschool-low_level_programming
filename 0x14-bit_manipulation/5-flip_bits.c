#include "holberton.h"
/**
 * flip_bits - Calculates how many bits we need to flip to get the other number
 * @n: Original number
 * @m: Target number
 * Return: Amount of bits to flip to get from number n to number m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shift = (8 * sizeof(unsigned long int)) - 1;
	unsigned long int i = 1;
	unsigned int flips = 0;

	for (i = i << shift; i != 0; i = i >> 1)
	{
		if ((n & i) != (m & i))
			flips++;
	}
	return (flips);
}
