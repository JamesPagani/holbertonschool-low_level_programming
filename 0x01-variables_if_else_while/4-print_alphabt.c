#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		if (ch == 101 || ch == 113)
			ch++;
		else
		{
			putchar(ch);
			ch++;
		}
	}

	putchar(10);

	return (0);
}
