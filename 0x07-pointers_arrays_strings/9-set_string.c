#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to a char
 * @to: Pointer destination
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
