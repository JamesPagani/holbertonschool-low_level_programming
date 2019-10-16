#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Declares a 2D array of integers and intializes it with zeroes
 * @width: First dimention size
 * @height: Second dimention size
 * Return: Pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
