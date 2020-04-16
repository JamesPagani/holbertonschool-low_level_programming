#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 * @array: Array of integers to print
 * @size: @array size
 * Return: Nothing
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Search for an element in a sorted array using binary search
 * @array: Array of integers
 * @size: Size of @array
 * @value: Value to search in array
 * Return: On success, return the index of the first match found.
 * On failure, return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int low_lim;
	int hi_lim;

	if (array == NULL)
		return (-1);

	low_lim = 0;
	hi_lim = size - 1;
	while (low_lim <= hi_lim)
	{
		print_array(array + low_lim, hi_lim - low_lim + 1);
		i = (hi_lim + low_lim) / 2;

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			low_lim = i + 1;
		else
			hi_lim = i - 1;
	}

	return (-1);
}
