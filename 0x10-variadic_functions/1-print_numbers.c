#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  Prints all given integer numbers
 * @separator: String to print between numbers
 * @n: Amount of integer numbers to print
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
