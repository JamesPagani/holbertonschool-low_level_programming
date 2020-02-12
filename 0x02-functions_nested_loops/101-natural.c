#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point. Prints the sum of all multiples of 3 and 5 of 1024
 * Return: 0 on success, anything else on error.
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
