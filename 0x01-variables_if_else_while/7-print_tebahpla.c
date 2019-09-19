#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}

	putchar(10);

	return (0);
}
