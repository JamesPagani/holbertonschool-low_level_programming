#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all the numbers from the given one to 98
 * @n: Starting point
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("%d\n", n);
}
