#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a matrix
 * @a: A matrix or double array
 * @size: The matrix size
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
