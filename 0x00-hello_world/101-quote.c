#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * main - Entry point. Prints a string using a diferent method
 * Return: 1 on success. Anything else for error.
 */

int main(void)
{
	int i;
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (1);
}
