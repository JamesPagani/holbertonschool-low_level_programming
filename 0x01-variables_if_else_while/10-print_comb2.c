#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int unit = 48;
	int decimal = 48;

	while (decimal <= 57)
	{
		while (unit <= 57)
		{
			putchar(decimal);
			putchar(unit);

			if (!(decimal == 57 && unit == 57))
			{
				putchar(44);
				putchar(32);
			}

			unit++;
		}

		unit = 48;
		decimal++;
	}

	putchar(10);

	return (0);
}
