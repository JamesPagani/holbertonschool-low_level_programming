#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}

	ch = 97;

	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}

	putchar(10);

	return (0);
}
