#include "search_algos.h"
/**
 * linear_search - Search for an element in an array with linear search
 * @array: An array of integers
 * @size: Size of @array
 * @value: Value to search in @array
 * Return: On success, return the index of the first match found.
 * On faliure, return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
