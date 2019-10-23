#include "function_pointers.h"
/**
 * array_iterator - Prints the elements of a given int array in a given format
 * @array: An array of integer numbers
 * @size: The size of the array
 * @action: Function to use for the array printing
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
