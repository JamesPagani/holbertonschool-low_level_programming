#include "function_pointers.h"
/**
 * print_name - Prints a name (string) in a specific format
 * @name: Name to print
 * @f: Pointer to a function that either pritns the name as is or in upper.
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
