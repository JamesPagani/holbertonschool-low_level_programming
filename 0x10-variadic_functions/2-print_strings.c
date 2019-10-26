#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints strings
 * @separator: String to print between the input strings
 * @n: Amount of strings to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *strng;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		strng = va_arg(strs, char *);
		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);
		if ((i + 1) != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
