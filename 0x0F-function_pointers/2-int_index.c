#include "function_pointers.h"
/**
 * int_index - Compares if an array of integers contains a specific number
 * @array: An array of integers
 * @size: Size of the array
 * @cmp: Function to use for integer comparison
 * Return: Index of the first match of integers. -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	if (array || cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
