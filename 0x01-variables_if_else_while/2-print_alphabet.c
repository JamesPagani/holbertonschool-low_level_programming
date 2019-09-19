#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (When successful)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);
}
