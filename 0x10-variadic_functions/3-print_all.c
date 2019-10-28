#include "variadic_functions.h"
#include <stdio.h>
/**
 * s_check - Prints a string or nil if none provided
 * @str: String to print
 * Return: The string itself or (nil) if none provided
 */
char *s_check(char *str)
{
	if (str == NULL)
		return ("(nil)");
	return (str);
}

/**
 * print_all - Prints many things according to a specified format per input
 * @format: Formats of each argument (in order)
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list in;
	char *sep;
	unsigned int i;

	if (format != NULL)
	{
		va_start(in, format);
		sep = "";
		i = 0;
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
			case 'c':
				printf("%s", sep);
				printf("%c", va_arg(in, int));
				break;
			case 'i':
				printf("%s", sep);
				printf("%d", va_arg(in, int));
				break;
			case 'f':
				printf("%s", sep);
				printf("%f", va_arg(in, double));
				break;
			case 's':
				printf("%s", sep);
				printf("%s", s_check(va_arg(in, char *)));
				break;
			}
			sep = ", ";
			i++;
		}
		va_end(in);
		printf("\n");
	}
}
