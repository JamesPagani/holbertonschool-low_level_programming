#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
		ch++;
	}

	putchar(10);

	return (0);
}
