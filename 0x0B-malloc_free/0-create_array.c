#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters, initialized with one char
 * @size: Size of the array
 * @c: Initializer character
 * Return: Pointer to the array or NULL if size is zero or the function fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
