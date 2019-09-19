#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int decimal = 48;
	int unit = 49;

	while (decimal <= 57)
	{
		while (unit <= 57)
		{
			putchar(decimal);
			putchar(unit);

			if (!(decimal == 56 && unit == 57))
			{
				putchar(44);
				putchar(32);
			}

			unit++;

		}

	decimal++;
	unit = decimal + 1;

	}

	putchar(10);

	return (0);
}
